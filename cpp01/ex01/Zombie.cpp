#include "Zombie.hpp"

Zombie::Zombie(void)
{
    return;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " has been destroyed." << std::endl;
    return;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::attributeName(std::string name)
{
    this->name = name;
}
