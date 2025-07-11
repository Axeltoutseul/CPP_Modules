#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap {

    public:

    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &src);
    ~ScavTrap(void);
    ScavTrap &operator=(const ScavTrap &src);
    void attack(const std::string& target);
    void guardGate(void);


    private:

    bool _is_guard_gate;
};

#endif
