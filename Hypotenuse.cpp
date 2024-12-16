#include <iostream>
#include <cmath>

int main()
{

    double sideA;
    double sideB;
    double hypo;

    std::cout << "\nThis is a triangle hypotenuse calculator. Enter side A: ";
    std::cin >> sideA;

    std::cout << "\nEnter side B: ";
    std::cin >> sideB;

    hypo = sqrt(pow(sideA, 2) + pow(sideB, 2));

    std::cout << "\nThe hypotenuse of the triangle is: " << hypo;

    return 0;

}