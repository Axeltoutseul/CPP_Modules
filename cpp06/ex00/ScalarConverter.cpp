#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter : default constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter : destructor called" << std::endl;
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

        if (is_special_value(content))
            std::cout << "char: impossible" << std::endl;
        else if (is_digit(content))
        {
            int nb = my_stol(content);
            c = static_cast<char>(nb);
            if (nb >= 32 && nb <= 126)
                std::cout << "char: '" << c << "'" << std::endl;
            else if (nb < 0)
                std::cout << "char: Impossible" << std::endl;
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
    if (is_digit(content))
    {
        nb = my_stol(content);
        if (nb < -2147483648 || nb > 2147483647)
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << nb << std::endl;
        return;
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
    std::string str = shortened_string(content);
    if (IsChar(content) && (content[0] < '0' || content[0] > '9'))
    {
        int n = static_cast<int>(content[0]);
        std::cout << "float: " << n << ".0f" << std::endl;
    }
    else if (is_digit(str) || is_special_value(content) || is_special_value(str))
    {
        float nb = strtof(content.c_str(), NULL);
        int x = nb;
        if (nb - x == 0)
            std::cout << "float: " << nb << ".0f" << std::endl;
        else
            std::cout << "float: " << nb << "f" << std::endl;
    }
    else
        std::cout << "float: impossible" << std::endl;
}

void ScalarConverter::ConvertToDouble(const std::string content)
{
    std::string str = shortened_string(content);
    if (IsChar(content) && (content[0] < '0' || content[0] > '9'))
    {
        int n = static_cast<int>(content[0]);
        std::cout << "double: " << n << ".0" << std::endl;
    }
    else if (is_digit(str) || is_special_value(content) || is_special_value(str))
    {
        double nb = strtod(content.c_str(), NULL);
        int x = nb;
        if (nb - x == 0)
            std::cout << "double: " << nb << ".0" << std::endl;
        else
            std::cout << "double: " << nb << std::endl;
    }
    else
        std::cout << "double: impossible" << std::endl;
}
