#include "Span.hpp"

Span::Span(unsigned int _size) : size(_size), filled_index(0)
{
    std::cout <<GREEN<<  "Span default construtor called!" <<END<< std::endl;
}

Span::Span(const Span& other)  : size(other.size), filled_index(0)
{
    
    std::cout <<GREEN<< "Span copy construtor called!" <<END<< std::endl;
  
    /*   std::vector<int>& getPtr(); */
    if (this != &other)
    {
        this->nbrs.clear();
        this->filled_index = 0;
        for (std::vector <int>::const_iterator other_it = other.getPtr().begin(); other_it != other.getPtr().end(); other_it++)
        {
            this->nbrs.push_back(*other_it);
            if (filled_index >= (int)other.size)
            {
                throw std::runtime_error("the limit of the vector was reached!");
            }
            filled_index++;
        }
    }
}

//for (std::vector<int>::const_iterator i = other.nbrs.begin(); i != other.nbrs.end(); i++)
Span& Span::operator=(const Span& other)
/* this->nbrs.resize(size); */
{
    if (this != &other)
    {
        this->nbrs.clear();
        this->filled_index = 0;
        for (std::vector <int>::const_iterator other_it = other.getPtr().begin(); other_it != other.getPtr().end(); other_it++)
        {
            this->nbrs.push_back(*other_it);
            if (filled_index >= (int)other.size)
            {
                throw std::runtime_error("the limit of the vector was reached!");
            }
            filled_index++;
        }
    }
    std::cout << "Span operator overload called!" << std::endl;
    return (*this);
}

void Span::addNumber(int nbr)
{
    if (this->filled_index >= (int)this->size)
        throw std::runtime_error("arr is filled to the max");
    int i = -1;
    while(++i < this->filled_index);
    this->filled_index++;
    this->nbrs.push_back(nbr);
}

int Span::longestSpan()
{
    if (this->size < 2)
        throw std::runtime_error("there are not enough elements in the array");
    std::vector<int>::iterator _max_element =  std::max_element(nbrs.begin(), nbrs.end());
    std::vector<int>::iterator _min_element =  std::min_element(nbrs.begin(), nbrs.end());
    return (*_max_element - *_min_element);    
}

int Span::shortestSpan()
{
    if (this->size < 2)
        throw std::runtime_error("there are not enough elements in the array");
    std::sort(this->nbrs.begin(), this->nbrs.end());
    
    int    smallest_diff = 0;
    int    lattest_diff;

    for (size_t i = 0; i < this->nbrs.size() - 1; i++)
    {

        lattest_diff = this->nbrs[i + 1] - this->nbrs[i];
        if (i == 0)
            smallest_diff = lattest_diff;
        else
        {
            smallest_diff = std::min(smallest_diff, lattest_diff);
        }
    }
    return (smallest_diff);
}

int Span::getFilledIndex() {return this->filled_index;};
int  Span::Size() {return this->size;}
const std::vector<int> &Span::getPtr()const { return this->nbrs;}

Span::~Span()
{
    std::cout << RED<<"Span destructor called!" <<END<< std::endl;
}
