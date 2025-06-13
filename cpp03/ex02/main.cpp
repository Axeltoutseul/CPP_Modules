#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap a("AEGGEBETBHFG");
    a.attack("Enemy");
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
    std::cout << std::endl;
    a.attack("Enemy");
    b.attack("Enemy");
    std::cout << std::endl;
    a.takeDamage(20);
    b.takeDamage(104);
    c.takeDamage(20);
    std::cout << std::endl;
    a.beRepaired(3);
    b.beRepaired(3);
    c.beRepaired(3);
    std::cout << std::endl;
    a.highFivesGuys();
    b.highFivesGuys();
    c.highFivesGuys();
    return 0;
}*/
