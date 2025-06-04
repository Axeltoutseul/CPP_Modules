#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    this->_name = name;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    //std::cout << "Default constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
    this->operator=(src);
    //std::cout << "Copy constructor" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    //std::cout << "Destructor" << std::endl;
    return;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    this->_name = src._name;
    this->_hit_points = src._hit_points;
    this->_energy_points = src._energy_points;
    this->_attack_damage = src._attack_damage;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_energy_points > 0)
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target \
        << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "You have no energy point..." << std::endl;
    this->_energy_points--;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << this->_name << " lost " << amount << " hit points!" << std::endl;
    this->_hit_points -= amount;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (this->_energy_points > 0)
    {
        std::cout << this->_name << " gained " << amount << " hit points!" << std::endl;
        this->_hit_points += amount;
    }
    else
        std::cout << "You have no energy point..." << std::endl;
    this->_energy_points--;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}
