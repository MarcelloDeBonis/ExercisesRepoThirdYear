#include <iostream>
#include <typeinfo>
#include <string>

// Templated function to determine if a type is an integral
template<typename T>
struct is_integral {
    static const bool value = false;
};

#define SPECIALIZE_IS_INTEGRAL(type) \
template<>                           \
struct is_integral<type> {           \
    static const bool value = true;  \
};

SPECIALIZE_IS_INTEGRAL(int)
SPECIALIZE_IS_INTEGRAL(unsigned int)
SPECIALIZE_IS_INTEGRAL(long)
SPECIALIZE_IS_INTEGRAL(unsigned long)
SPECIALIZE_IS_INTEGRAL(short)
SPECIALIZE_IS_INTEGRAL(unsigned short)
SPECIALIZE_IS_INTEGRAL(char)
SPECIALIZE_IS_INTEGRAL(unsigned char)
SPECIALIZE_IS_INTEGRAL(long long)
SPECIALIZE_IS_INTEGRAL(unsigned long long)
SPECIALIZE_IS_INTEGRAL(wchar_t)
SPECIALIZE_IS_INTEGRAL(char16_t)
SPECIALIZE_IS_INTEGRAL(char32_t)
SPECIALIZE_IS_INTEGRAL(signed char)

// Templated function to determine if a type is const
template<typename T>
struct is_const {
    static const bool value = false;
};

template<typename T>
struct is_const<const T> {
    static const bool value = true;
};

// Templated function to determine if a type is a pointer
template<typename T>
struct is_pointer {
    static const bool value = false;
};

template<typename T>
struct is_pointer<T*> {
    static const bool value = true;
};

// Templated function to print a line indicating the type
template<typename Type>
void printTypeInformation() {
    if (is_integral<Type>::value) {
        std::cout << "Type is an integer." << std::endl;
    } else if (std::is_floating_point<Type>::value) {
        std::cout << "Type is a floating point." << std::endl;
    } else if (std::is_class<Type>::value) {
        std::cout << "Type is a class with name: " << typeid(Type).name() << std::endl;
    } else if (is_const<Type>::value) {
        std::cout << "Type is a constant." << std::endl;
    } else if (is_pointer<Type>::value) {
        std::cout << "Type is a pointer." << std::endl;
    } else {
        std::cout << "Type is something else." << std::endl;
    }
}

int main() {
    printTypeInformation<int>();                // Integer
    printTypeInformation<float>();              // Floating point
    printTypeInformation<std::string>();        // Class
    printTypeInformation<const int>();          // Constant
    printTypeInformation<void*>();               // Pointer
    printTypeInformation<double>();             // Floating point
    printTypeInformation<char>();               // Integer
    printTypeInformation<void*>();              // Pointer
    printTypeInformation<const std::string>();  // Constant
    printTypeInformation<unsigned long long>(); // Integer

    return 0;
}
