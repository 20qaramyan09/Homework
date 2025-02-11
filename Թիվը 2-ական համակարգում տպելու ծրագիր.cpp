#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int sum = 0;
    while (number != 0) {
        sum += number % 10;  // Add the last digit to sum
        number /= 10;        // Remove the last digit
    }

    std::cout << "The sum of the digits is: " << sum << std::endl;

    return 0;
}
