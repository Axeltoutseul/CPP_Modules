#include "ScalarConverter.hpp"

long my_stol(const std::string str)
{
    const char *my_char = str.c_str();
    long nb = atol(my_char);
    return nb;
}

int is_digit(const std::string arg)
{
    int i = 0;
    if ((arg[0] == '+' || arg[0] == '-') && arg.size() > 1)
        i++;
    while (arg[i])
    {
        if ((arg[i] < '0' || arg[i] > '9') && arg[i] != '.')
            return 0;
        i++;
    }
    return 1;
}

int is_special_value(std::string str)
{
    if (str == "+inf" || str == "-inf" || str == "inf" || str == "nan")
        return 1;
    return 0;
}

int is_special_value_with_f(std::string str)
{
    if (str == "+inff" || str == "-inff" || str == "inff" || str == "nanf")
        return 1;
    return 0;
}

std::string shortened_string(std::string str)
{
    int length = str.size();
    if (length > 1 && str[length - 1] == 'f')
        str.resize(str.size() - 1);
    return str;
}
