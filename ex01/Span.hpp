#pragma once

#include <iostream>
#include <string>
#include <iostream>

class Span
{
private:
    unsigned int size;
    int filled_index; 
    int *ptr;
public:
    Span(unsigned int _size);
    Span(const Span& other) ;
    Span& operator=(const Span& other) const;
    ~Span();
    void addNumber(int nbr);
    int shortestSpan();
    int Size();
};
