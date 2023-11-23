#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    /*
    Namespace
    - solution for preventing name conflicts in large projects
    - Each entity needs a unique name
    - To identify named entities as long as the namespace are different
    */
    using namespace std; //BAD EVIL LINE DONT USE. std contains hundreds of entities
    using std::cout; //Better

    int x = 999;
    cout << x << std::endl; //Output = 99
    cout << first::x << std::endl; //Output = 1
    cout << second::x << std::endl; //Output = 2
    return 0;
}