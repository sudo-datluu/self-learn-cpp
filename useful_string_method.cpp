#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    name.length(); // Numbers of characters
    name.empty(); // Check string is empty
    name.clear(); // Clear the string
    name.append("Moew Moew has been appended to your name");
    name.at(1); // Character value at the given index
    name.insert(0, "Insert at position 0");
    name.find(' '); // Find the first position of the character at the string
    name.erase(0, 4); //Remove characters from 0 -> 4
    return 0;
}