#include "ScalarConverter.hpp"

std::string ft_strncpy(std::string dest, const std::string src, unsigned int n)
{
    unsigned int i = 0;
    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return dest;
}

long my_stol(const std::string str)
{
    const char *my_char = str.c_str();
    int i = 0;
    long nb = 0;
    long neg = 1;
    while (my_char[i] == ' ' || (my_char[i] >= 9 && my_char[i] <= 13))
        i++;
    if (my_char[i] == '+' || my_char[i] == '-')
    {
        if (my_char[i] == '-')
            neg *= -1;
        i++;
    }
    while (my_char[i] >= '0' && my_char[i] <= '9')
    {
        nb = nb * 10 + (my_char[i] - '0');
        i++;
    }
    return nb * neg;
}

int count_occurrences(const std::string arg, const char c)
{
    int i = 0;
    int count = 0;
    while (arg[i])
    {
        if (arg[i] == c)
            count++;
        i++;
    }
    return count;
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
    std::string new_string;
    int length = str.size();
    if (length > 1 && str[length - 1] == 'f')
        str.resize(str.size() - 1);
        //new_string = ft_strncpy(new_string, str, length - 1);
    return str;
}
