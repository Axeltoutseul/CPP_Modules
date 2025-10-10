#include "Array.hpp"

int main()
{
    try
    {
        int i = 0;
        int length = 8;
        int letter = 65;
        Array<char> new_array(length);
        srand(time(NULL));
        while (i < length)
            new_array[i++] = letter++;
        Array<char> mirror(new_array);
        mirror[7] = 'J';
        i = 0;
        while (i < length)
            std::cout << new_array[i++] << std::endl;
    }
    catch(const Array<char>::IndexNotFoundException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}

/*int main()
{
    try
    {
        int i = 0;
        int length = 8;
        int nb = 2;
        Array<int> new_array(length);
        srand(time(NULL));
        while (i < length)
        {
            new_array[i++] = nb;
            nb += 2;
        }
        Array<int> mirror(new_array);
        mirror[7] = 50;
        i = 0;
        while (i < length)
            std::cout << new_array[i++] << std::endl;
    }
    catch(const Array<int>::IndexNotFoundException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}*/