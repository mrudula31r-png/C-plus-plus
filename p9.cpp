// Here is a simple C++ program to swap two numbers using a temporary variable:
#include <iostream>
int main() {
    int a, b;

    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;

    std::cout << "\nBefore swapping: a = " << a << ", b = " << b << std::endl;

    // Swapping logic
    int temp = a;
    a = b;
    b = temp;

    std::cout << "After swapping:  a = " << a << ", b = " << b << std::endl;

    return 0;
}

//Using std::swap (Standard Library)

#include <iostream>
#include <utility> // Includes std::swap

int main() {
    int a = 5, b = 10;
    std::swap(a, b);
    std::cout << "a = " << a << ", b = " << b; // Output: a = 10, b = 5
    return 0;
}
