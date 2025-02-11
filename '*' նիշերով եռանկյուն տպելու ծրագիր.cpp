#include <iostream>

int main() {
    int height;
    std::cout << "Enter the height of the pyramid: ";
    std::cin >> height;

    for (int i = 1; i <= height; ++i) {
        // Print leading spaces
        for (int j = 0; j < height - i; ++j) {
            std::cout << " ";
        }
        // Print stars
        for (int k = 0; k < 2 * i - 1; ++k) {
            std::cout << "*";
        }
        // Move to the next line
        std::cout << std::endl;
    }

    return 0;
}
