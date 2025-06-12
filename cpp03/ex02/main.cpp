#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap a("AEGGEBETBHFG");
    a.attack("Foo");
    a.takeDamage(20);
    a.beRepaired(3);
    a.highFivesGuys();
    return 0;
}

/*int main(void)
{
    FragTrap a;
    FragTrap b(a);
    FragTrap c("WRGHATHGH");
    a.attack("Foo");
    b.attack("Foo");
    a.takeDamage(20);
    b.takeDamage(104);
    c.takeDamage(20);
    a.beRepaired(3);
    b.beRepaired(3);
    c.beRepaired(3);
    a.highFivesGuys();
    b.highFivesGuys();
    c.highFivesGuys();
    return 0;
}*/
