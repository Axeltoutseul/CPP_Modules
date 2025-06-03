#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_hit_points = 10;
    this->_energy_points = 10;
    this->_attack_damage = 0;
    std::cout << "Default constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    this->operator=(src);
    std::cout << "Copy constructor" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    this->_name = src._name;
    this->_hit_points = src._hit_points;
    this->_energy_points = src._energy_points;
    this->_attack_damage = src._attack_damage;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << this->_name << " attacks " << target \
    << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << this->_name << " lost " << amount << " hit points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << this->_name << " gained " << amount << " hit points!" << std::endl;
}
