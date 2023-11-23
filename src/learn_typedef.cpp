#include <iostream>
#include <vector>

/*
typedef:
- reserve keyword to create alias for "data type"
- can be used for creating new data type
- improve readability & reduct typos
- used when there is a clear benefit only
- now, they use 'using' (work better with templates)
*/

// used "_t" suffix for typedef keyword 
typedef std::vector<std::pair<std::string, int>> pairlist_t; 

// Same
using text_t = std::string;
typedef std::string text_t; 

int main() {
    // Clear benefit of typedef/alias
    std::vector<std::pair<std::string, int>> ugly_list;
    pairlist_t pretty_list;
    return 0;
}