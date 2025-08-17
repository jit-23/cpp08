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
#include <stack>
#include <deque>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m" 
#define BLUE  "\033[34m"
#define END  "\033[0m"
#define OLIVE "\033[38;5;3m"
#define PURPLE "\033[38;5;5m"
#define ORANGE "\033[38;5;208m"

templante <typename T, typename _type = std::deque<T> >
class MutantStack
{
private:
    _type stck;
    unsigned int size;
public:
    MutantStack(unsigned int _size);
    MutantStack(const MutantStack &other);
    MutantStack &operator=(const MutantStack &other);
    
    void push(T element);
    void pop();
    unsigned int size();    
    bool empty();
    ~MutantStack();
};

void MutantStack::push(T element) {stck.push_back(T element);}
void MutantStack::pop() {stck.pop_back();}
bool MutantStack::empty() {stck.empty();}
unsigned int  MutantStack::GetSize() {stck.size(T element);}

MutantStack::MutantStack(unsigned int _size) : size(_size)
{
    std::cout << "MutantStack constructor called" << std::endl;
}



unsigned int MutantStack::GetSize() {return this->size;}
void MutantStack::pop() {stck.pop();}
bool MutantStack::empty {return stck.empty();}


MutantStack::MutantStack(const MutantStack  &other)
{
    std::cout << "MutantStack copy constructor called" << std::endl;
    if (this != *other)
    {
        for (int i = this->size; i > 0; i--)
            this->stck.pop(i);
        this->size = other.GetSize();    
        for (int i = 0; i < other.size ; i++)
            this->stck.push(other.stck.push(i));        
    }
}

MutantStack& MutantStack::operator=(const MutantStack  &other)  
{
    std::cout << "MutantStack signing operator called" << std::endl;
    if (this != *other)
    {
        for (int i = this->size; i > 0; i--)
            this->stck.pop(i);
        this->size = other.GetSize();    
        for (int i = 0; i < other.size ; i++)
            this->stck.push(other.stck.push(i));        
    }
    return *this;
}



MutantStack::~MutantStack()
{
    std::cout << "MutantStack destructor called" << std::endl;

}
