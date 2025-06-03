#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *new_zombie;

    new_zombie = new Zombie(name);
    if (!new_zombie)
        return (NULL);
    new_zombie->announce();
    return (new_zombie);
}
