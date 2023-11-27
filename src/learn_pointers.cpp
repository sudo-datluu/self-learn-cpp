#include <iostream>

int main() {
    // Pointers = variables store "Memory Value" of another variable
    // Why use pointerS? Sometime it easier when working with address

    // &: address-of operator
    // *: de-referenece operator
    int year = 2024;
    int *pYear = &year; //Create pointer pYear store address of the year variable
    
    std::cout << pYear << "\n"; //Address value
    std::cout << *pYear << "\n"; //Value that address store


    //Array is actually a pointer save the address of the first element
    std::string cars[3] = {"Ford", "BMW", "Porches"};

    std::cout << cars << "\n"; // Address of cars[0] = Address of cars
    std::cout << *cars << "\n"; //Value of cars[0]
}