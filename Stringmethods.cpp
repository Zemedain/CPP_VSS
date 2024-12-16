#include <iostream>
#include <string>

int main()
{

    // String methods, ways to manipulate character strings.

    std::string name = "John Doe";
    std::string empty = "";

    // x.length(): Gives the length of given string variable.
    std::cout << name;
    std::cout << "\n" << name.length();

    // x.empty(): Returns a boolean (True (1) for empty string, False (0) for the opposite)
    std::cout << "\n" << name.empty() << "(meaning False)";
    std::cout << "\n" << empty.empty()<< "(meaning True)";

    // x.append("xyz"): Adds said characters to the end of the string.
    name.append(" gone missing");
    std::cout << "\n" << name;

    // x.at(index): Gives the character at said index of the string.
    std::cout << "\n" << name.at(0);

    //x.insert(index, "characters"): Appends given characters to the position of the index given.
    name.insert(8, " not");
    std::cout << "\n" << name;

    //x.find("character"): Gives the index for the first instance of the given character in the string.
    std::cout << "\n" << name.find("D");

    //x.erase(beginning index, num of characters): Erases given number of characters from the string starting from the given index
    name.erase(9, 4);
    std::cout << "\n" << name;

    return 0;

}