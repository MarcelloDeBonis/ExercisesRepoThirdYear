#ifndef PHILOSOPHER_H
#define PHILOSOPHER_H

#include <mutex>
#include <thread>
#include <string>
#include <chrono>
#include <condition_variable>

class Philosopher {
private:
    static std::mutex counterMutex;
    static std::condition_variable allDoneCondition;
    static int finishedCounter;
    static int totalPhilosophers;
    
    std::string name;
    std::string meal;
    std::chrono::milliseconds mealCost;
    std::mutex &leftFork;
    std::mutex &rightFork;
    std::thread lifeThread;
    std::chrono::milliseconds eatDuration;

public:
    Philosopher(std::string name, std::string meal, std::chrono::milliseconds mealCost, std::mutex &leftFork, std::mutex &rightFork, std::chrono::milliseconds eatDuration);
    ~Philosopher();

    // Delete the copy constructor and copy assignment operator
    Philosopher(const Philosopher&) = delete;
    Philosopher& operator=(const Philosopher&) = delete;

    // Define move constructor and move assignment operator
    Philosopher(Philosopher&& other) noexcept;
    Philosopher& operator=(Philosopher&& other) noexcept;

    static void Initialize(int total);
    static void NotifyAllDone();
    static bool AllHaveEaten();

    static std::mutex& GetCounterMutex();
    static std::condition_variable& GetCondition();
    
    void Dine();
    void Think();
    void Eat();
};

#endif // PHILOSOPHER_H
