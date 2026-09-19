// Program to find even or odd number
#include <iostream>

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    // A number is even if it is divisible by 2 with no remainder
    if (number % 2 == 0) {
        std::cout << number << " is even." << std::endl;
    } else {
        std::cout << number << " is odd." << std::endl;
    }

    return 0;
}
