#include <iostream>
#include <functional>


bool equals(const int& a, const int& b) {
    return a == b;
}

bool greater_than(const int& a, const int& b) {
    return a > b;
}

bool less_than(const int& a, const int& b) {
    return a < b;
}

template<typename T>
int find(const T* arr, int size, const T& element, std::function<bool(const int&, const int&)> predicate) {
    for (int i = 0; i < size; ++i) {
        if (predicate(size, element) && arr[i] == element) {
            return i;
        }
    }
    return -1;
}

template<typename T>
class MyVector {
private:
    T* data;
    size_t capacity;
    size_t currentSize;

    void resize(size_t newCapacity) {
        T* newData = new T[newCapacity];
        for (size_t i = 0; i < currentSize; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        capacity = newCapacity;
    }

public:
    MyVector() : data(nullptr), capacity(0), currentSize(0) {}

    ~MyVector() {
        delete[] data;
    }

    void add(const T& value) {
        if (currentSize == capacity) {
            resize(capacity == 0 ? 1 : capacity * 2);
        }
        data[currentSize++] = value;
    }

    void remove(const T& value) {
        T* element = find(value);
        if (element) {
            size_t index = element - data;  // Calculate the index based on the pointer difference
            remove(index);
        }
    }

    void remove(size_t index) {
        if (index >= currentSize) return;  // Check out-of-bound indices

        T* newData = new T[currentSize - 1];
        for (size_t i = 0, j = 0; i < currentSize; ++i) {
            if (i != index) {
                newData[j++] = data[i];
            }
        }
        delete[] data;
        data = newData;
        --currentSize;
    }

    T* find(const T& value) const {
        for (size_t i = 0; i < currentSize; ++i) {
            if (data[i] == value) {
                return &data[i];
            }
        }
        return nullptr;  // Not found
    }

    void clear() {
        delete[] data;
        data = nullptr;
        capacity = 0;
        currentSize = 0;
    }

    size_t size() const {
        return currentSize;
    }
};


int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    std::cout << "Find equals: " << find(arr, 5, 3, equals) << std::endl;
    std::cout << "Find greater_than: " << find(arr, 5, 3, greater_than) << std::endl;
    std::cout << "Find less_than: " << find(arr, 5, 3, less_than) << std::endl;
    
    MyVector<int> vec;

    // Test add function
    vec.add(1);
    vec.add(2);
    vec.add(3);
    vec.add(4);
    std::cout << "After adding elements, vector size: " << vec.size() << std::endl;  // Should print 4

    // Test find function with element present
    int* found = vec.find(3);
    if (found) {
        std::cout << "Element 3 found: " << *found << std::endl;  // Should print 3
    } else {
        std::cout << "Element 3 not found" << std::endl;
    }

    // Test find function with element not present
    int* notFound = vec.find(5);
    if (notFound) {
        std::cout << "Element 5 found: " << *notFound << std::endl;
    } else {
        std::cout << "Element 5 not found" << std::endl;  // Should print this
    }

    // Test remove by index
    vec.remove(1);
    std::cout << "After removing element at index 1, vector size: " << vec.size() << std::endl;  // Should print 3
    std::cout << "Checking if element 2 is still present: " << (vec.find(2) ? "Yes" : "No") << std::endl;  // Should print Yes

    // Test remove by value
    vec.remove(4);  // Remove the element with value 4
    std::cout << "After removing element with value 4, vector size: " << vec.size() << std::endl;  // Should print 2
    std::cout << "Checking if element 4 is still present: " << (vec.find(4) ? "Yes" : "No") << std::endl;  // Should print No

    // Test clear function
    vec.clear();
    std::cout << "After clearing, vector size: " << vec.size() << std::endl;  // Should print 0

    return 0;
}

