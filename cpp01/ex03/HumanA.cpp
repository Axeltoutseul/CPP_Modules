#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
    this->name = name;
    this->_weapon = &weapon;
}

HumanA::~HumanA(void)
{
    return;
}

void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << _weapon->getType() << std::endl;
}
