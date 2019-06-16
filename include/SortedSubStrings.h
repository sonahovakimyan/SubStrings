//
//  SortedSubStrings_h.h
//

#ifndef SortedSubStrings_h
#define SortedSubStrings_h

#include <stdio.h>
#include <string>
#include <vector>

class SortedSubStrings {
public:
    SortedSubStrings(std::string& src, const size_t size);
    void print();

private:
    void create(const std::string& src, const size_t size);

    std::vector<const std::string> m_subStrings;
};

#endif /* SortedSubStrings_h */
