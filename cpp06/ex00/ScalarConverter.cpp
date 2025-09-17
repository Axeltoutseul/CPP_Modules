#include "ScalarConverter.hpp"

long my_stol(const std::string str)
{
    const char *my_char = str.c_str();
    long nb = atol(my_char);
    return nb;
}

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter : default constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter : destructor called" << std::endl;
}

int ScalarConverter::IsDigit(const std::string arg)
{
    int i = 0;
    if (arg[0] == '-')
        i++;
    while (arg[i])
    {
        if ((arg[i] < '0' || arg[i] > '9') && arg[i] != '.')
            return 0;
        i++;
    }
    return 1;
}

int ScalarConverter::IsChar(const std::string arg)
{
    if (arg[0] >= 32 && arg[0] <= 126 && arg.size() == 1)
        return 1;
    return 0;
}

void ScalarConverter::ConvertToChar(std::string content)
{
    try
    {
        char c;

        if (IsDigit(content))
        {
            int nb = my_stol(content);
            c = static_cast<char>(nb);
            if (nb >= 32 && nb <= 126)
                std::cout << "char: '" << c << "'" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
        }
        else if (IsChar(content))
        {
            c = static_cast<char>(content[0]);
            std::cout << "char: '" << c << "'" << std::endl;
        }
        else
            std::cout << "char: impossible" << std::endl;
    }
    catch (...)
    {
        std::cerr << "char: Impossible" << std::endl;
    }
}

void ScalarConverter::ConvertToInt(const std::string content)
{
    long nb;
    if (IsDigit(content))
    {
        nb = my_stol(content);
        if (nb < -2147483648 || nb > 2147483647)
        {
            std::cout << "int: impossible" << std::endl;
            return;
        }
    }
    else
    {
        if (IsChar(content))
            nb = static_cast<int>(content[0]);
        else
        {
            std::cout << "int: impossible" << std::endl;
            return;
        }
    }
    std::cout << "int: " << nb << std::endl;
}

void ScalarConverter::ConvertToFloat(const std::string content)
{
    float nb = strtof(content.c_str(), NULL);
    int x = nb;
    if (nb - x == 0)
        std::cout << "float: " << nb << ".0f" << std::endl;
    else
        std::cout << "float: " << nb << "f" << std::endl;
}

void ScalarConverter::ConvertToDouble(const std::string content)
{
    double nb = strtod(content.c_str(), NULL);
    int x = nb;
    if (nb - x == 0)
        std::cout << "double: " << nb << ".0" << std::endl;
    else
        std::cout << "double: " << nb << std::endl;
}
