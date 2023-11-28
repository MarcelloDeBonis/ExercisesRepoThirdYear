#include "../Public/Philosopher.h"
#include <iostream>
#include <utility> // for std::move

std::mutex Philosopher::counterMutex;
std::condition_variable Philosopher::allDoneCondition;
int Philosopher::finishedCounter = 0;
int Philosopher::totalPhilosophers = 0;

Philosopher::Philosopher(std::string name, std::string meal, std::chrono::milliseconds mealCost, 
                         std::mutex &leftFork, std::mutex &rightFork, std::chrono::milliseconds eatDuration)
    : name(std::move(name)), meal(std::move(meal)), mealCost(mealCost), 
      leftFork(leftFork), rightFork(rightFork), eatDuration(eatDuration), 
      lifeThread(&Philosopher::Dine, this) {
    std::cout << name << " sits down to eat " << meal << ", which will take " 
              << mealCost.count() << " milliseconds to eat." << std::endl;
}

Philosopher::~Philosopher() {
    if (lifeThread.joinable()) {
        lifeThread.join();
    }
}

Philosopher::Philosopher(Philosopher&& other) noexcept
    : name(std::move(other.name)), meal(std::move(other.meal)), mealCost(other.mealCost), 
      leftFork(other.leftFork), rightFork(other.rightFork), eatDuration(other.eatDuration), 
      lifeThread(std::move(other.lifeThread)) {}

Philosopher& Philosopher::operator=(Philosopher&& other) noexcept {
    if (this != &other) {
        if (lifeThread.joinable()) {
            lifeThread.join();
        }
        name = std::move(other.name);
        meal = std::move(other.meal);
        mealCost = other.mealCost;
        eatDuration = other.eatDuration;
        lifeThread = std::move(other.lifeThread);
    }
    return *this;
}

void Philosopher::Initialize(int total) {
    totalPhilosophers = total;
}

void Philosopher::NotifyAllDone() {
    std::lock_guard<std::mutex> lock(counterMutex);
    finishedCounter++;
    if (finishedCounter == totalPhilosophers) {
        allDoneCondition.notify_all();
    }
}

bool Philosopher::AllHaveEaten() {
    std::unique_lock<std::mutex> lock(counterMutex);
    return finishedCounter == totalPhilosophers;
}

void Philosopher::Dine() {
    Think();
    Eat();
    NotifyAllDone();
}

void Philosopher::Think() {
    std::cout << name << " starts to think.\n" << std::endl;
    std::this_thread::sleep_for(eatDuration);
    std::cout << name << " stops thinking and prepares to eat.\n" << std::endl;
}

void Philosopher::Eat() {
    std::lock(leftFork, rightFork);
    std::lock_guard<std::mutex> leftLock(leftFork, std::adopt_lock);
    std::lock_guard<std::mutex> rightLock(rightFork, std::adopt_lock);

    std::cout << name << " starts eating " << meal << ", which costs " << mealCost.count() << " milliseconds.\n" << std::endl;
    std::this_thread::sleep_for(mealCost);
    std::cout << name << " finished eating " << meal << "." << std::endl;
}

std::mutex& Philosopher::GetCounterMutex() {
    return counterMutex;
}

std::condition_variable& Philosopher::GetCondition() {
    return allDoneCondition;
}