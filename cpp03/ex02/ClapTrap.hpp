#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

    public:

    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &src);
    virtual ~ClapTrap(void);
    ClapTrap &operator=(const ClapTrap &src);
    virtual void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);


    protected:

    std::string _name;
    int _hit_points;
    int _energy_points;
    int _attack_damage;
};

#endif
