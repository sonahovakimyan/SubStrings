//
//  main.cpp
//

#include "SortedSubStrings.h"

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::string letters;
    int size;
    
    std::cout << "Please enter the input string and the size of substrings elements." << std::endl;
    
    std::cin >> letters >> size;
    
    try {
        SortedSubStrings str(letters, size);
        
        str.print();
        
    } catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
