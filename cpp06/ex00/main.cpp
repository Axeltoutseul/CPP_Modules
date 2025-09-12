#include "ScalarConverter.hpp"

int is_digit(const char *arg)
{
    int i = 0;
    if (arg[0] == '-')
        i++;
    while (arg[i])
    {
        if (arg[i] < '0' || arg[i] > '9')
            return 0;
        i++;
    }
    return 1;
}

int main(int argc, char **argv)
{

    ScalarConverter content;
    if (argc != 2)
    {
        std::cout << "You must have one argument" << std::endl;
        return -1;
    }
    std::cout << "char: '" << content.convertToChar(argv[1]) << "'" << std::endl;
    std::cout << "int: " << content.convertToInt(argv[1]) << std::endl;
    return 0;
}
