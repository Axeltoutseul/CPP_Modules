#include "Array.hpp"

int main()
{
    Array<int> new_array(10);
    Array<int> new_array2(new_array);
    for (std::size_t i = 0; i < new_array2.GetSize(); i++)
        std::cout << new_array2[i] << std::endl;
    return 0;
}
