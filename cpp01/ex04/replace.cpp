#include "replace.hpp"

int ft_strlen(std::string str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

std::string replace(std::string str, std::string s1, std::string s2)
{
    std::string new_string;
    int i = 0;
    int size = ft_strlen(s1);
    while (str[i])
    {
        if (str.substr(i, size) == s1)
        {
            new_string += s2;
            i += size;
        }
        else
        {
            new_string += str[i];
            i++;
        }
    }
    return new_string;
}
