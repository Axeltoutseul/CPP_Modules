#include "Array.hpp"

int main()
{
    try
    {    
        Array<int> new_array(8);
        std::cout << new_array[8] << std::endl;
    }
    catch(const Array<int>::IndexNotFoundException& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
