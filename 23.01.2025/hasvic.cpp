#include <iostream>


int main() {
    double num1 = 0;
    double num2 = 0;
    char operation;

    std::cout << "nermuteq arajin tivy ";
    std::cin >> num1;

    std::cout << "nermutq nshany (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "nermuteq erkrord tivy ";
    std::cin >> num2;

    if (operation == '+') {
	    std::cout << "ardiunq " << num1 + num2 << std::endl;
    }
    else if (operation == '-') {
	    std::cout << "ardiunq " << num1 - num2 << std::endl;
    }
    else if (operation == '*') {
	    std::cout << "ardiunq " << num1 * num2 << std::endl;
    }
    else if (operation == '/') {
        if (num2 != 0) {
		std::cout << "ardiunq" << num1 / num2 << std::endl;
        } else {
		std::cout << "ardiunq" << std::endl;
        }
    }
   

    return 0;
}

