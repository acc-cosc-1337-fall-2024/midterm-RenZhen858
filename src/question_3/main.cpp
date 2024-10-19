#include<iostream>
#include<vector>
#include"question3.h"

int main()
{
    int cookies;
    char choice;

    do{
        std::cout<<"Enter the number of cookies to bake (or -1 to quit): ";
        std::cin>>cookies;

        if (cookies == -1) {
            break;
        } else if (cookies < 1) {
            std::cout<<"Please enter a positive number of cookies."<<std::endl;
            continue;
        }

        std::vector<double>ingredients = get_cookie_ingredients(cookies);

        std::cout<<"Cups of Sugar: "<<ingredients[0]<<std::endl;
        std::cout<<"Cups of Butter: "<< ingredients[1]<<std::endl;
        std::cout<<"Cups of Flour: "<<ingredients[2]<<std::endl;

        std::cout<<"Do you want to enter another number of cookies? (y/n): ";
        std::cin>>choice;

    }while (choice == 'y' || choice == 'Y');

    std::cout<<"Exit"<<std::endl;

    return 0;
}