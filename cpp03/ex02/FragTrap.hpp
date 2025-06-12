#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"


class FragTrap : public ClapTrap {

    public:

    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap &src);
    ~FragTrap(void);
    FragTrap &operator=(const FragTrap &src);
    void attack(const std::string& target);
    void highFivesGuys(void);

};

#endif
