#include <iostream>

int main()
{

    int num1;
    int num2;
    char operator;

    std::cout << "\nWelcome to the calculator program.";

    std::cout << "\nEnter your arithmetic operation (+ - / *): ";
    std::cin >> operator;
    while(operator not "+" && operator not "-" && operator not "/" && operator not "*")
    {
        std::cout << "\nPlease enter a valid operator (+ - * /): ";
        std::cin >> operator;
    }

    std::cout << "\nEnter the first number: ";
    std::cin >> num1;

    std::cout << "\nEnter the second number: ";
    std::cin >> num2;



    return 0;

}