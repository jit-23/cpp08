#include "easyfind.hpp"

int main()
{
    {
        std::vector<int> v1= {1,2,3,4,5,6,7,8,9,10};
        try
        {
            easyfind<std::vector<int>>(v1, 110);
        }
        catch(const std::exception& e)
        {
            std::cerr << ORANGE << e.what() << END << '\n';
        }
    }
    
    return 0;
}
