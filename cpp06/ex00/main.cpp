#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    ScalarConverter content;
    if (argc != 2)
    {
        std::cout << "You must have one argument" << std::endl;
        return -1;
    }
    content.DisplayConversion(argv[1]);
    return 0;
}
