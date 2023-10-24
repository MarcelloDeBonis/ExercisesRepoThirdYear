#include <iostream>

constexpr bool is_prime(int n, int i = 2) {
    if (n <= 2) 
        return (n == 2) ? true : false;
    if (n % i == 0) 
        return false;
    if (i * i > n) 
        return true;

    return is_prime(n, i + 1);
}

int main() {
    constexpr int num = 69; // You can change this value
    if (is_prime(num))
        std::cout << num << " is a prime number.";
    else
        std::cout << num << " is not a prime number.";
    return 0;
}

