#include <iostream>

template <typename T>
class LinkedList {
private:
    struct Node {
        T data;
        Node* next;
        
        Node(const T& value, Node* nextNode = nullptr)
            : data(value), next(nextNode) {}
    };

    Node* head;
    Node* tail;
    int size;

public:
    LinkedList() : head(nullptr), tail(nullptr), size(0) {}

    ~LinkedList() {
        clear();
    }
    
    void append(const T& value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }
    
    void prepend(const T& value) {
        Node* newNode = new Node(value, head);
        head = newNode;
        if (tail == nullptr) {
            tail = head;
        }
        size++;
    }
    
    bool removeFirst() {
        if (head == nullptr) return false;

        Node* temp = head;
        head = head->next;
        delete temp;

        if (head == nullptr) {
            tail = nullptr;
        }

        size--;
        return true;
    }
    
    bool contains(const T& value) const {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == value) return true;
            current = current->next;
        }
        return false;
    }
    
    int getSize() const {
        return size;
    }
    
    bool isEmpty() const {
        return size == 0;
    }
    
    void clear() {
        while (!isEmpty()) {
            removeFirst();
        }
    }
    
    void print() const {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "NULL" << std::endl;
    }
};

int main() {
    LinkedList<int> list;

    list.append(1);
    list.append(2);
    list.append(3);

    std::cout << "Linked List:" << std::endl;
    list.print();

    std::cout << "Contains 2? " << list.contains(2) << std::endl;
    std::cout << "Contains 4? " << list.contains(4) << std::endl;

    list.removeFirst();
    std::cout << "After removing the first element:" << std::endl;
    list.print();

    return 0;
}
