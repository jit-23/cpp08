#pragma once 

#include <iostream>
#include <sstream> // library that allows concatenation, insertion and extration from strings. (it allows big performance from std::strings)
#include <ostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <limits>
#include <stdint.h>


#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m" 
#define BLUE  "\033[34m"
#define END  "\033[0m"
#define OLIVE "\033[38;5;3m"
#define PURPLE "\033[38;5;5m"
#define ORANGE "\033[38;5;208m"

class MutantStack
{
private:
    /* data */
public:
    MutantStack(/* args */);
    ~MutantStack();
};

MutantStack::MutantStack(/* args */)
{
}

MutantStack::~MutantStack()
{
}
