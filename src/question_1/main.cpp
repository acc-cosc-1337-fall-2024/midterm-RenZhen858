#include <iostream>
#include "question1.h"

int main() {
    int n;
    char choice;

    do {
        // Prompt user for a number
        std::cout << "Enter a number between 1 and 15: ";
        std::cin >> n;

        // Validate input
        while (n < 1 || n > 15) {
            std::cout << "Invalid input. Please enter a number between 1 and 15: ";
            std::cin >> n;
        }

        // Get the Fibonacci sequence
        std::string fib_sequence = get_fib_sequence(n);

        // Display the Fibonacci sequence
        std::cout << "Fibonacci sequence up to " << n << ": " << fib_sequence << std::endl;

        // Ask if the user wants to continue
        std::cout << "Do you want to enter another number? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    std::cout << "Exit" << std::endl;

    return 0;
}
