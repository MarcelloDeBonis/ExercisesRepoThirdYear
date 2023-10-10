#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>

template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
struct Node {
    T data;
    Node* next;

    Node(const T& value = T(), Node* next = nullptr) : data(value), next(next) {}
};

template <typename T>
class LinkedList {
private:
    Node<T>* head;

public:
    LinkedList() : head(nullptr) {}

    // Method to add an element to the list
    void addElement(const T& value) {
        Node<T>* newNode = new Node<T>(value);
        if (!head) {
            head = newNode;
        } else {
            Node<T>* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Method to remove an element from the list
    void removeElement(const T& value) {
        if (!head) {
            std::cout << "The list is empty." << std::endl;
            return;
        }

        if (head->data == value) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node<T>* current = head;
        while (current->next) {
            if (current->next->data == value) {
                Node<T>* temp = current->next;
                current->next = current->next->next;
                delete temp;
                return;
            }
            current = current->next;
        }

        std::cout << "Element not found in the list." << std::endl;
    }

    // Method to print the list
    void printList() {
        Node<T>* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Method to deallocate the memory of the list
    void deallocateMemory() {
        Node<T>* current = head;
        while (current) {
            Node<T>* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
    }

    ~LinkedList() {
        deallocateMemory();
    }
};

// Function to clear the console (cross-platform)
void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    LinkedList<int> intList; // Creating a linked list of integers

    while (true) {
        clearConsole(); // Clear the console

        std::cout << "Menu:" << std::endl;
        std::cout << "1. Add element" << std::endl;
        std::cout << "2. Remove element" << std::endl;
        std::cout << "3. Print list" << std::endl;
        std::cout << "4. Exit" << std::endl;

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter an element to add: ";
                int addValue;
                std::cin >> addValue;
                intList.addElement(addValue);
                break;
            case 2:
                std::cout << "Enter an element to remove: ";
                int removeValue;
                std::cin >> removeValue;
                intList.removeElement(removeValue);
                break;
            case 3:
                intList.printList();
                break;
            case 4:
                intList.deallocateMemory();
                return 0;
            default:
                std::cout << "Invalid choice." << std::endl;
        }
        std::this_thread::sleep_for(std::chrono::seconds(3));
    }

    return 0;
}
