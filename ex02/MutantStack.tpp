#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
    std::cout << "MutantStack constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(unsigned int size) : _size(size)
{
    std::cout << "MutantStack constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>  &other) : std::stack<T>(other) {std::cout << "MutantStack copy constructor called" << std::endl;}
 

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>  &other)  
{
    std::cout << "MutantStack signing operator called" << std::endl;
    if (this != *other)
    {
       *this = other; 
    }
    return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {std::cout << "MutantStack destructor called" << std::endl;}
