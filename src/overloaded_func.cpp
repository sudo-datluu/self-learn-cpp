#include <iostream>
#include <format>

void buy();
void buy(std::string item);

int main()
{
    buy();
    buy("apple");
    return 0;
}

void buy() {
    std::cout << "You have bought all items in your cart\n";
}

void buy(std::string item)
{
    std::cout << std::format("You have bought {}", item);
}

