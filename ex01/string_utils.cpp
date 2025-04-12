#include "Account.hpp"

int ft_strlen(std::string str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

std::string copy_name(std::string src)
{
    int i = 0;
    std::string dest;
    while (src[i] && i < 10)
        dest += src[i++];
    if (ft_strlen(src) > 10)
        dest[9] = '.';
    while (i < 10)
    {
        dest += ' ';
        i++;
    }
    dest[i] = 0;
    return (dest);
}

int ft_atoi(std::string str)
{
    int i = 0;
    int nb = 0;
    int neg = 1;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-')
        neg *= -1;
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + (str[i] - '0');
        i++;
    }
    return (nb * neg);
}