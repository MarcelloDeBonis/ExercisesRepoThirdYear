#include <iostream>


void modifyInteger(int x) {
    std::cout << "Value of the integer before modification: " << x << std::endl;
    x = x * 2;
    std::cout << "Value of the integer after modification: " << x << std::endl;
}

void modifyIntegerWithPointer(int* p) {
    std::cout << "Value of the integer before modification: " << *p << std::endl;
    (*p) = (*p) * 3;
    std::cout << "Value of the integer after modification: " << *p << std::endl;
}

#include <iostream>

// Function to swap two elements of an array
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort an array using pointers
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (*(arr + j) > *(arr + j + 1)) {
                swap(arr + j, arr + j + 1);
            }
        }
    }
}


int main() {
    
    int number = 5;
    std::cout << "Example of modifying an integer:" << std::endl;
    modifyInteger(number);
    std::cout << "Value of the integer in main after modify: " << number << std::endl;

    int anotherNumber = 7;
    std::cout << "\nExample of modifying an integer using a pointer:" << std::endl;
    modifyIntegerWithPointer(&anotherNumber);
    std::cout << "Value of the integer in main after modify: " << anotherNumber << std::endl;






    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array before sorting: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    sortArray(arr, size);

    std::cout << "Array after sorting: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}