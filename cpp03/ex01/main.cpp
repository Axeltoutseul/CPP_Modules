#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap a("Scav");
    a.attack("Foo");
    a.takeDamage(2);
    a.beRepaired(3);
    a.guardGate();
    return 0;
}
