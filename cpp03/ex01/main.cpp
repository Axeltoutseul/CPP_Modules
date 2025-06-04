#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap a("Klap");
    a.attack("Foo");
    a.takeDamage(2);
    a.beRepaired(3);
    return 0;
}
