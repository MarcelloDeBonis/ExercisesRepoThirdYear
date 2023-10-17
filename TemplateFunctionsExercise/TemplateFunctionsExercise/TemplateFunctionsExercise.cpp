#include <iostream>
#include <algorithm>
#include <string>

// Template function to add two variables of the same type
template<typename T>
T add(const T& a, const T& b) {
    return a + b;
}

// Template function to sort an array of any type
template<typename T, size_t N>
void sortArray(T (&arr)[N]) {
    std::sort(arr, arr + N);
}

class Point {
public:
    double x, y;

    Point(double x = 0, double y = 0) : x(x), y(y) {}

    // Operators definition to allow addition and sorting
    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }

    bool operator<(const Point& other) const {
        if (x == other.x) {
            return y < other.y;
        }
        return x < other.x;
    }

    friend std::ostream& operator<<(std::ostream& os, const Point& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }
};

int main() {
    // Test the add function
    int a = 5, b = 10;
    double x = 5.5, y = 10.5;

    std::cout << "Adding integers: " << add(a, b) << std::endl;  // Output: 15
    std::cout << "Adding doubles: " << add(x, y) << std::endl;  // Output: 16

    // Test the sortArray function
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
    sortArray(arr);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    // Test with Point class
    Point p1(2, 3), p2(1, 4);
    std::cout << "Adding points: " << add(p1, p2) << std::endl;  // Output: Adding points: (3, 7)

    Point pointArray[] = { Point(3, 5), Point(1, 2), Point(3, 4) };
    size_t pointCount = sizeof(pointArray) / sizeof(pointArray[0]);

    std::cout << "Original point array: ";
    for (int i = 0; i < pointCount; ++i) {
        std::cout << pointArray[i] << " ";
    }

    std::cout << std::endl;
    sortArray(pointArray);

    std::cout << "Sorted point array: ";
    for (int i = 0; i < pointCount; ++i) {
        std::cout << pointArray[i] << " ";
    }

    std::cout << std::endl;

    // Test with strings
    std::string s1 = "hello", s2 = " world";
    std::cout << "Adding strings: " << add(s1, s2) << std::endl;  // Output: Adding strings: hello world

    std::string stringArray[] = { "pear", "apple", "banana" };
    size_t stringCount = sizeof(stringArray) / sizeof(stringArray[0]);

    std::cout << "Original string array: ";
    for (int i = 0; i < stringCount; ++i) {
        std::cout << stringArray[i] << " ";
    }

    std::cout << std::endl;
    sortArray(stringArray);

    std::cout << "Sorted string array: ";
    for (int i = 0; i < stringCount; ++i) {
        std::cout << stringArray[i] << " ";
    }

    return 0;
}
