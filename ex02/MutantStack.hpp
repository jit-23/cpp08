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

template <typename T>
class MutantStack : public std::stack<T>
{
    private:
        unsigned int _size;
    public:
        MutantStack();
        MutantStack(unsigned int size);
        MutantStack(const MutantStack<T> &other);
        MutantStack<T> &operator=(const MutantStack<T> &other);
    
        typedef typename   std::stack<T>::container_type::iterator iterator;
    
    iterator begin(){
        return (std::stack<T>::c.begin());
    }
    iterator end(){
        return (std::stack<T>::c.end());
    }
    ~MutantStack();
};
void PrintStack(std::stack<int> s);

void PrintStack(std::stack<int> s)
{
    if (s.empty()) 
        return;
    int x = s.top();
    s.pop();
    PrintStack(s);
    std::cout << x << std::endl;
    s.push(x);
}



/*  USED FOR A STD::LIST */
 #pragma once 
#include <list>
/* 
template <typename T>
class MutantStack : public std::list<T>
{
	public:
		typedef typename std::list<T>::iterator iterator;

		MutantStack() : std::list<T>()
		{
			std::cout << "MutantStack constructor" << std::endl;
		}
		MutantStack(MutantStack const &other) : std::list<T>(other)
		{
			std::cout << "MutantStack copy constructor" << std::endl;
		}
		~MutantStack()
		{
			std::cout << "MutantStack destructor" << std::endl; 
		}
		std::list<T> &operator=(MutantStack const &other)
		{
			std::cout << "MutantStack assignation operator" << std::endl;
			if(this != &other)
				*this= other;
			return(*this);
		}
		iterator begin()
		{
			return (std::list<T>::begin());
		}
		iterator end()
		{
			return (std::list<T>::end());
		}
};  */