#include <iostream>

// 2 functions, execute same things but different datatypes
int boringFunc(int x, int y) {
    return (x>y) ? x : y;
}
char boringFunc(char x, char y) {
    return (x>y) ? x : y;
}

// Better. Create template T which presents for any type
template <typename T>
T betterFunc(T x, T y) {
    return (x>y) ? x : y; 
}

// Best. Create template with different type
// "auto" keyword: flexibly return type according to the value
template <typename T0, typename T1>
auto bestFunc(T0 x, T1 y) {
    return (x>y) ? x : y; 
}

int main() 
{
    // Really inefficient
    std::cout << boringFunc('1', '2') << '\n';
    std::cout << boringFunc(1, 2) << '\n';

    // Better solution
    std::cout << betterFunc(1, 2);
    std::cout << betterFunc('1', '2');
    
    // But how about the case we pass 2 different data types?
    std::cout << bestFunc(1, 2.33); //Return 2.33
    std::cout << bestFunc(3, 2.33); //Return 3
}