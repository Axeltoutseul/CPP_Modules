#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main()
{
    std::string name;
    std::cout << "Zombie name : ";
    std::cin >> name;
    randomChump(name);
    std::cout << "Zombie name : ";
    std::cin >> name;
    Zombie *new_zombie = newZombie(name);
    delete new_zombie;
    return 0;
}
