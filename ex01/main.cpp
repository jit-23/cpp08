#include "Span.hpp"

int main()
{
    Span a(10);
    for (unsigned int i = 0; i < a.Size(); i++)
        a.addNumber(i);
    for (unsigned int i = 0; i < a.Size(); i++)
    {
        std::cout << a.ptr[i] << std::endl;
    }
    

    /* std::cout << a.shortestSpan() << std::endl; */
        
    return 0;
}
