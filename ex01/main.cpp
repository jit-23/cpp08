#include "Span.hpp"
#include <ctime>
/* int main()
{
    srand(time(0));
    Span a(5);

    try
    {
        int i =-1;
        while (++i < a.Size() )//+ 5)
            a.addNumber(rand() % 50);
            std::cout << "longest span : " << a.longestSpan()  << std::endl;
            std::cout << "shortest span : " << a.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr <<ORANGE<< e.what() <<END<< '\n';
        }
    for (std::vector<int>::iterator it = a.getPtr().begin(); it != a.getPtr().end(); it++)
    {
        std::cout << YELLOW << "element of vector: " << BLUE << *it << END << std::endl;
    }
    return 0;
} */

int main()
{
    srand(time(0));

    Span a(5);
    try
    {
        int i = -1;
        while(++i < a.Size())
            a.addNumber(rand() % 50);
        std::cout << GREEN << "*********************" << std::endl;
        std::cout <<          "* Span (a) elements *" << std::endl;
        std::cout <<          "*********************" << END << std::endl;

        for (std::vector<int>::const_iterator it = a.getPtr().begin(); it != a.getPtr().end(); it++)
            std::cout<< YELLOW << "elements of class A: " << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << ORANGE << e.what() << END << '\n';
    }
    //Span b = a; 
    Span b(a); 
    try
    {
       //b.addNumber(2);
       std::cout << GREEN << "\n\n*********************" << std::endl;
       std::cout <<              "* Span (b) elements *" << std::endl;
       std::cout <<              "*********************" << END << std::endl;    
       for (std::vector<int>::const_iterator it = a.getPtr().begin(); it != a.getPtr().end(); it++)
           std::cout<< YELLOW << "elements of class B: " << *it << std::endl;
    }
    catch(const std::exception& e)
    {
       std::cerr << ORANGE << e.what() << END << '\n';
    }
    return 0;
}


/* 
 int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
} */