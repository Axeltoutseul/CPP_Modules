#include "easyfind.hpp"

int main(void)
{
    try
    {
        int tab[] = {2, 4, 6, 8, 10};
        std::cout << find_occurrence<int>(tab, 3) << std::endl;
    }
    catch(const NotFoundException &e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
