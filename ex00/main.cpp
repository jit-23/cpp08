#include "easyfind.hpp"

int main()
{
    {
        std::vector<int> v1;
        for (int i = 0; i < 10; i++)
            v1.push_back(i);        
        try
        {
            easyfind<std::vector<int> >(v1, 1);
        }
        catch(const std::exception& e)
        {
            std::cerr << ORANGE << e.what() << END << '\n';
        }

        try
        {
            easyfind<std::vector<int> >(v1, -1);
        }
        catch(const std::exception& e)
        {
            std::cerr << ORANGE << e.what() << END << '\n';
        }

        try
        {
            easyfind<std::vector<int> >(v1, 9);
        }
        
        catch(const std::exception& e)
        {
            std::cerr << ORANGE << e.what() << END << '\n';
        }
        try
        {
            easyfind<std::vector<int> >(v1, 1281821);
        }
        catch(const std::exception& e)
        {
            std::cerr << ORANGE << e.what() << END << '\n';
        }
    }
    
    return 0;
}
