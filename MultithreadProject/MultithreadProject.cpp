#include "./Public/Philosopher.h"
#include <iostream>
#include <vector>
#include <mutex>

int main() {
    const int numPhilosophers = 5;
    std::vector<std::mutex> forks(numPhilosophers);
    std::vector<Philosopher> philosophers;
    std::vector<std::string> names = {"Aristotle", "Plato", "Socrates", "Confucius", "Descartes"};
    std::vector<std::string> meals = {"Sushi", "Pizza", "Pasta", "Salad", "Steak"};
    std::vector<std::chrono::milliseconds> mealCosts = {
        std::chrono::milliseconds(30000),
        std::chrono::milliseconds(10000),
        std::chrono::milliseconds(15000),
        std::chrono::milliseconds(8000),
        std::chrono::milliseconds(20000)
    };
    std::vector<std::chrono::milliseconds> thinkingTimes = {
        std::chrono::milliseconds(1000),
        std::chrono::milliseconds(1000),
        std::chrono::milliseconds(5000),
        std::chrono::milliseconds(5000),
        std::chrono::milliseconds(5000)
    };

    Philosopher::Initialize(numPhilosophers);

    for (int i = 0; i < numPhilosophers; ++i) {
        philosophers.emplace_back(names[i], meals[i], mealCosts[i], forks[i], forks[(i + 1) % numPhilosophers], thinkingTimes[i]);
    }

    // Wait for all philosophers to finish eating
    std::unique_lock<std::mutex> lock(Philosopher::GetCounterMutex());
    Philosopher::GetCondition().wait(lock, Philosopher::AllHaveEaten);

    std::cout << "All philosophers have finished eating." << std::endl;

    return 0;
}
