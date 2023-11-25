#include <iostream>
#include <format>
using std::string;

void swap(string &x, string &y);
void swapFail(string x, string y);

int main()
{
    string x_str = "fire";
    string y_str = "air";
    
    swap(x_str, y_str);
    std::cout << std::format("X: {}, Y: {}\n", x_str, y_str);
    
    //Try to print address of variables to see the different
    swapFail(x_str, y_str);
    std::cout << &x_str << '\n'; 
    std::cout << &y_str << '\n'; 
    /*
    Ouput sth like this. It could be diffrent in each running session.
    0x7fffffffd560 - address of x in swapFail func
    0x7fffffffd580 - address of y in swapFail func
    0x7fffffffd520 - address of x in main
    0x7fffffffd540 - address of y in main
    */

    return 0;
}

// Reference passing: Give the address on the Memory of the variable
// Note that each variable is allocated by a memory address
// After execute, the value will be saved on that address
void swap(string &x, string &y) {
    string temp = x;
    x = y;
    y = temp;
}

// Value passing: Copy the value to other variables
// Simply changing the copy version of the variable
void swapFail(string x, string y) {
    string temp = x;
    x = y;
    y = temp;
    std::cout << &x << '\n';
    std::cout << &y << '\n';
}

