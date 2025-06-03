#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    _type = type;
    return;
}

Weapon::~Weapon(void)
{
    return;
}

void Weapon::setType(std::string type)
{
    _type = type;
}

std::string Weapon::getType(void) const
{
    return _type;
}
