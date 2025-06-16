#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
    this->_is_guard_gate = false;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "ScavTrap: This is the default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_is_guard_gate = false;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "ScavTrap: This is the default constructor with name" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
    std::cout << "ScavTrap: This is the copy constructor" << std::endl;
    this->operator=(src);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap: This is the destructor" << std::endl;
    return;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    this->_name = src._name;
    this->_hit_points = src._hit_points;
    this->_energy_points = src._energy_points;
    this->_attack_damage = src._attack_damage;
    this->_is_guard_gate = src._is_guard_gate;
    std::cout << "ScavTrap: This is the Assignment operator overloading" << std::endl;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_hit_points <= 0)
        std::cout << "ScavTrap " << this->_name << " hasn't any hit point...";
    else
    {
        if (this->_energy_points <= 0)
            std::cout << "ScavTrap " << this->_name << " hasn't any energy point..." << std::endl;
        else
        {
            std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
            this->_energy_points--;
        }
    }
}

void ScavTrap::guardGate(void)
{
    if (this->_hit_points <= 0)
        std::cout << this->_name << " can't become guard gate cause he's already dead..." << std::endl;
    else
    {
        std::cout << this->_name << " is now in Gate keeper mode." << std::endl;
        this->_is_guard_gate = true;
    }
}
