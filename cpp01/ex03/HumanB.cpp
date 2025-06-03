#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->_weapon = NULL;
}

HumanB::~HumanB(void)
{
    return;
}

void HumanB::attack(void)
{
    if (this->_weapon)
        std::cout << name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << name << " attacks without weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &_weapon)
{
    this->_weapon = &_weapon;
}
