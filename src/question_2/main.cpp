#include <iostream>
#include "question2.h"

int main() {
    int num1, num2;
    char choice;

    do {
        // Prompt user for two int values
        std::cout << "Enter two integers between 1 and 200 (separated by space): ";
        std::cin >> num1 >> num2;

        // Validate input
        while ((num1 < 1 || num1 > 200) || (num2 < 1 || num2 > 200)) {
            std::cout << "Invalid input. Please enter two integers between 1 and 200: ";
            std::cin >> num1 >> num2;
        }

        int gcd_result = find_gcd(num1, num2);

        if (gcd_result == -1) {
            std::cout << "No common factors found for " << num1 << " and " << num2 << "." << std::endl;
        } else {
            std::cout << "The greatest common divisor of " << num1 << " and " << num2 << " is: " << gcd_result << std::endl;
        }

        // Ask if the user wants to continue
        std::cout << "Do you want to enter another pair of numbers? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    std::cout << "Exit" << std::endl;

    return 0;
}