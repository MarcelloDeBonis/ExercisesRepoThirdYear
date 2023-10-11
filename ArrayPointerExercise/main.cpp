#include <iostream>
#include <cstdio>

class MyClass {
public:
    MyClass(int value) : data(value) {}
    int getData() const { return data; }

private:
    int data;
};

int main() {
    
    void* pointersArray[4];

    int intValue = 42;
    double doubleValue = 3.14;
    MyClass obj1(42);
    MyClass obj2(123);
    
    pointersArray[0] = &intValue;
    pointersArray[1] = &doubleValue;
    pointersArray[2] = &obj1;
    pointersArray[3] = &obj2;

    int* intPtr = static_cast<int*>(pointersArray[0]);
    double* doublePtr = static_cast<double*>(pointersArray[1]);
    MyClass* objPtr1 = static_cast<MyClass*>(pointersArray[2]);
    MyClass* objPtr2 = static_cast<MyClass*>(pointersArray[3]);
    
    std::cout << "Int Value: " << *intPtr << std::endl;
    std::cout << "Double Value: " << *doublePtr << std::endl;
    
    std::cout << std::endl << std::endl;
    std::cout << "Object 1 Data: " << objPtr1->getData() << std::endl;
    std::cout << "Object 2 Data: " << objPtr2->getData() << std::endl;
    
    std::cout << std::endl << std::endl;
    const char* strings[] = {
        "First string",
        "Second string",
        "Third string",
        "Fourth string",
        "Fifth string"
    };
    
    for (int i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
