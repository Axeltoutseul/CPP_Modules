#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
    std::cout << "FragTrap: We're inside the default constructor." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap: We're inside the default constructor with name." << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
    std::cout << "FragTrap: We're inside the copy constructor." << std::endl;
    this->operator=(src);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap: We're inside the destructor." << std::endl;
    return;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
    if (this != &src)
    {
        this->_name = src._name;
        this->_hit_points = src._hit_points;
        this->_energy_points = src._energy_points;
        this->_attack_damage = src._attack_damage;
    }
    std::cout << "FragTrap: We're inside the assignation operator overloading" << std::endl;
    return *this;
}

void FragTrap::attack(const std::string& target)
{
    if (this->_hit_points <= 0)
        std::cout << "FragTrap " << this->_name << " hasn't any hit point...";
    else
    {
        if (this->_energy_points <= 0)
            std::cout << "FragTrap " << this->_name << " hasn't any energy point..." << std::endl;
        else
        {
            std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
            this->_energy_points--;
        }
    }
}

void FragTrap::highFivesGuys(void)
{
    if (this->_hit_points <= 0)
        std::cout << this->_name << " can't ask a high five cause he's already dead..." << std::endl;
    else
        std::cout << "High five 🙏" << std::endl;
}
