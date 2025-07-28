#pragma once

#include <iostream>
#include <stdexcept>
#include <exception>

#include <iterator>
#include <vector>
#include <deque>
#include <list>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m" 
#define BLUE  "\033[34m"
#define END  "\033[0m"
#define OLIVE "\033[38;5;3m"
#define PURPLE "\033[38;5;5m"
#define ORANGE "\033[38;5;208m"

void send_msg(int n)
{
    std::cout << "Number '" << n <<"' finded in the container!"<< std::endl;
}

template <class T> void easyfind(T &arr, int n)
{
    for (t T::iterator i = arr.begin() ; i != arr.end(); i++)
    {
        if (*i == n)
            return (send_msg(n), (void)0);
    }
    throw std::runtime_error("searched value was not in the container in question");
    return ;
}
