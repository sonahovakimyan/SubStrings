//
//  SortedSubStrings.cpp
//

#include "SortedSubStrings.h"
#include <iostream>
#include <sstream>

namespace  {
    std::string subString = "";
} // unnamed namespace

SortedSubStrings::SortedSubStrings(std::string& src, const size_t size) {
        
        std::sort(src.begin(), src.end());
        
        if(size > src.size()) {
            throw std::invalid_argument("The size of substrings should be less then size of input string.");
        }
        
        create(src, size);
}
    
void SortedSubStrings::print() {
    for(size_t i = 0; i < m_subStrings.size(); ++i) {
        std::cout << m_subStrings[i] << std::endl;
    }
}

void SortedSubStrings::create(const std::string& src, const size_t size) {
    
    if(size == 0) {
        m_subStrings.push_back(subString);
        return;
    }
    
    for(size_t j = 0; j < src.size(); ++j) {
        subString += src[j];
        
        std::string temp = src;
        temp.erase(std::remove(temp.begin(), temp.end(), src[j]), temp.end());
        create(temp, size - 1);
        
        subString.pop_back();
        continue;
    }
}
