#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

using namespace std;

const int philosopherNum = 10;

mutex forks[philosopherNum];
vector<thread> philosophers;


void philosophersAction(int philosopherID) {

    int leftFork = philosopherID;
    int rightFork = (philosopherID + 1) % philosopherNum;

    while (true)
    {
        //Thinking
        cout << "Philosopher " << philosopherID << " is thinking." << endl;
        this_thread::sleep_for(chrono::milliseconds(500));

        //Pick up forks
        forks[leftFork].lock();
        forks[rightFork].lock();

        //Eating
        cout << "Philosopher " << philosopherID << " is eating." << endl;
        this_thread::sleep_for(chrono::milliseconds(500));

        forks[leftFork].unlock();
        forks[rightFork].unlock();
    }
}


int main()
{
    for (int i = 0; i < philosopherNum; i++) {
        philosophers.emplace_back(philosophersAction, i);
    }

    for (auto& philosopher : philosophers) {
        philosopher.join();
    }

    return 0;
}