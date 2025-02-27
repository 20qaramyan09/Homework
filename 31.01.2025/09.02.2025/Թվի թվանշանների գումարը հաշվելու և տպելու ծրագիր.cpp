#include <iostream>

int main() {
    int number;
    std::cout << "Մուտքագրեք թիվ: ";
    std::cin >> number;
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    std::cout << "Թվանշանների գումարը: " << sum << std::endl;

    return 0;
}
