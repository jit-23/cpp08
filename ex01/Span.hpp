#pragma once

#include <iostream>
#include <string>
#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m" 
#define BLUE  "\033[34m"
#define END  "\033[0m"
#define OLIVE "\033[38;5;3m"
#define PURPLE "\033[38;5;5m"
#define ORANGE "\033[38;5;208m"

class Span
{
private:
    unsigned int size;
    int filled_index; 
    std::vector<int> nbrs;
public:
    Span(unsigned int _size);
    Span(const Span& other) ;
    const std::vector<int> &getPtr() const ;
    Span& operator=(const Span& other);
    ~Span();
    void addNumber(int nbr);
    int shortestSpan();
    int longestSpan();
    int getFilledIndex();
    int Size();

};
 