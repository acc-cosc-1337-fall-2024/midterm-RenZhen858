#include <iostream>
#include <limits>
#include "question4.h"

int main() {
    int widgets_sold;
    char continue_choice;

    do {
        std::cout << "Enter the number of widgets sold: ";
        std::cin >> widgets_sold;

        while (std::cin.fail() || widgets_sold < 0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a non-negative integer: ";
            std::cin >> widgets_sold;
        }

        int points = get_earned_points(widgets_sold);
        std::cout << "Points Earned: " << points << std::endl;

        std::cout << "Do you want to enter another value? (y/n): ";
        std::cin >> continue_choice;

    } while (continue_choice == 'y' || continue_choice == 'Y');

    return 0;
}