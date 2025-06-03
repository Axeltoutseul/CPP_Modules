#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int ft_atoi(std::string str)
{
    int i = 0;
    int nb = 0;
    int neg = 1;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            neg *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + (str[i] - '0');
        i++;
    }
    return (nb * neg);
}

int main(void)
{
    std::string nb;
    int i = 0;
    int N;
    std::string name;
    Zombie *zombies;

    std::cout << "Number of zombies : ";
    std::cin >> nb;
    N = ft_atoi(nb);
    std::cout << "Name of each zombie : ";
    std::cin >> name;
    zombies = zombieHorde(N, name);
    while (i < N)
        zombies[i++].announce();
    delete[] zombies;
    return 0;
}
