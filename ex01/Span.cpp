#include "Span.hpp"


Span::Span(unsigned int _size) : size(_size), filled_index(0)
{
    std::cout << "Span default construtor called!" << std::endl;
    ptr = new int[this->size];
}

Span::Span(const Span& other)  : size(other.size), filled_index(0)
{
    if (this != &other)
    {
        delete [] this->ptr && this->ptr = new int[this->size];
        for (int i = 0; i < other.size; i++)
            this->ptr[i] = other->ptr[i];        
    }
    std::cout << "Span copy construtor called!" << std::endl;
}

Span& Span::operator=(const Span& other)  const
{
    if (this != &other)
    {
        this->size = other.size;
        this->filled_index = other.filled_index;
        delete [] this->ptr && this->ptr = new int[this->size];
        for (int i = 0; i < other.size; i++)
            this->ptr[i] = other->ptr[i];        
    }
    std::cout << "Span operator overload called!" << std::endl;
    return (*this);
}

void Span::addNumber(int nbr)
{
    if (this->filled_index >= this->size)
        throw runtime_error("arr is filled to the max");
    int i = -1;
    while(++i < this->filled_index);
    this->filled_index
    this->ptr[i] = nbr;
}

int Span::shortestSpan()
{
    if (this->size < 2)
        throw runtime_error("there are not enough elements in the array");
    int smaller = ptr[0];
    int bigger = ptr[size];
    for (size_t i = 0; i < this->size; i++)
    {
        if (smaller > ptr[i])
            smaller = ptr[i];
    }
    
    for (size_t i = 0; i < this->size; i++)
    {
        if (bigger < ptr[i])
            bigger = ptr[i];
    }
    std::cout << "smaller "<< smaller << std::endl;
    std::cout <<"bigger " << bigger << std::endl;
    
}

int Span::Size() {return this->size;}

Span::~Span()
{
    delete [] ptr;
}
