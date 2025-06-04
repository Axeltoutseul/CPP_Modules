#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

class ScavTrap {

    public:

    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &src);
    ~ScavTrap(void);
    ScavTrap &operator=(const ScavTrap &src);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void guardGate(void);


    private:

    std::string _name;
    int _hit_points;
    int _energy_points;
    int _attack_damage;
};

#endif
