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

template <typename T, typename _type = std::deque<T>>
class MutantStack
{
private:
    _type stck;
    unsigned int size;
public:
    MutantStack(unsigned int _size);
    MutantStack(const MutantStack &other);
    MutantStack &operator=(const MutantStack &other);
    // std::vector<int>::const_iterator it;


    typedef _type<T>::iterator _begin(); 
    typedef _type<T>::iterator _end(); 

    void push(T element);
    void pop();
    unsigned int GetSize();    
    bool empty();

    ~MutantStack();
};



/* class Foo {

  std::vector<int>::iterator begin() { return data.begin(); }
  std::vector<int>::iterator end() { return data.end(); }

  std::vector<int>::const_iterator begin() const { return data.begin(); }
  std::vector<int>::const_iterator end() const { return data.end(); }
private:
  std::vector<int> data
}; */
/* template <typename T, typename _type>
_type<T>::const_iterator MutantStack<T,_type>::begin()
{
} */



template <typename T, typename _type>
void MutantStack<T,_type>::push(T element) {stck.push_back(T element);}

template <typename T, typename _type>
void MutantStack<T,_type>::pop() {stck.pop_back();}

template <typename T, typename _type>
bool MutantStack<T,_type>::empty() {stck.empty();}

template <typename T, typename _type>
unsigned int MutantStack<T,_type>::GetSize() {stck.size(T element);}

template <typename T, typename _type>
unsigned int MutantStack<T,_type>::GetSize() {return this->size;}

template <typename T, typename _type>
void MutantStack<T,_type>::pop() {stck.pop();}


template <typename T, typename _type>
MutantStack<T,_type>::MutantStack(unsigned int _size) : size(_size)
{
    std::cout << "MutantStack constructor called" << std::endl;
}

template <typename T, typename _type>
MutantStack<T,_type>::MutantStack(const MutantStack  &other)
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

template <typename T, typename _type>
MutantStack<T,_type>& MutantStack<T,_type>::operator=(const MutantStack  &other)  
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

template <typename T, typename _type>
MutantStack<T,_type>::~MutantStack()
{
    std::cout << "MutantStack destructor called" << std::endl;

}
