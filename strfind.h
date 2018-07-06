//
// Created by jetbrains on 2018-07-06.
//

#ifndef REMOTEDEBUG_BUBLE_H
#define REMOTEDEBUG_BUBLE_H


#include <cstdio>

#include <iostream>

int findstr (const std::string &s, const std::string &sub ) {

    size_t pos = s.find(sub);
    if (pos != std::string::npos)
        std::cout << "Found at pos = " << pos << "\n";
    else
        std::cout << "Not found\n";
}
#endif //REMOTEDEBUG_BUBLE_H
