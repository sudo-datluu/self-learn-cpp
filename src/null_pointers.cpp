#include <iostream>

int main()
{
    /*
    nullptr = keyword represent for a null pointer
    - a null pointer is a pointer is not pointing anything (null point)
    - helpful when checking if an address was assigned to a pointer
    
    - when using pointer, 
    if we try deferencing nullptr or pointing to free memory
    it will cause runtime error.
    */
    int *pointer = nullptr;
    int x = 666;

    //pointer = &x; //For some reason, you forget to assign the address
    if (pointer == nullptr) {
        std::cout << "Unassigned pointer";
        
        //YOUR COMPUTER GONNA EXPLODE. DONT TRY THIS AT HOME
        //std::cout << *pointer; 

    } else {
        std::cout << "Now you can access to the pointer value";
        std::cout << *pointer;
    }
}