#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    this->_name = "Foo";
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "ClapTrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "ClapTrap: Default constructor with name called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "ClapTrap: Copy constructor called" << std::endl;
    this->operator=(src);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap: Destructor called" << std::endl;
    return;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    if (this != &src)
    {
        this->_name = src._name;
        this->_hit_points = src._hit_points;
        this->_energy_points = src._energy_points;
        this->_attack_damage = src._attack_damage;
    }
    std::cout << "ClapTrap: Assignation operator overloading called" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_hit_points <= 0)
        std::cout << "ClapTrap " << this->_name << " has no hit point...";
    else
    {
        if (this->_energy_points <= 0)
            std::cout << "ClapTrap " << this->_name << " has no energy point..." << std::endl;
        else
        {
            std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
            this->_energy_points--;
        }
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points <= 0)
        std::cout << this->_name << " is already dead..." << std::endl;
    else
    {
        if ((int)amount > this->_hit_points)
            amount = this->_hit_points;
        this->_hit_points -= amount;
        std::cout << this->_name << " lost " << amount << " hit points!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit_points <= 0)
        std::cout << this->_name << " can't gain HP cause he's dead..." << std::endl;
    else
    {
        if (this->_energy_points > 0)
        {
            std::cout << this->_name << " gained " << amount << " hit points!" << std::endl;
            this->_hit_points += amount;
        }
        else
            std::cout << this->_name << " has no energy point..." << std::endl;
        this->_energy_points--;
    }
}
