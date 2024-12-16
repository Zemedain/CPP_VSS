#include <iostream>

int main()
{
    std::string name;
    short age;

    std::cout << "\nInput exercise, enter your name: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "\nEnter your age. ";
    std::cin >> age;

    std::cout << "\nGood day, " << name << ". You are " << age << " years old.";

    return 0;

}