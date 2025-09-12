#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter : default constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter : destructor called" << std::endl;
}

char ScalarConverter::convertToChar(char *content)
{
    char c;

    if (is_digit(content))
    {
        int nb = atoi(content);
        c = static_cast<char>(nb);
    }
    else
        c = static_cast<char>(*content);
    return c;
}

int ScalarConverter::convertToInt(char *content)
{
    int c;
    if (is_digit(content))
        c = atoi(content);
    else
        c = static_cast<int>(*content);
    return c;
}
