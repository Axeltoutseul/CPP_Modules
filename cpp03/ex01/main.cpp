#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap a("Scavy");
    a.attack("WAFHWRGH");
    a.takeDamage(20);
    a.beRepaired(3);
    a.guardGate();
    return 0;
}

/*int main(void)
{
    ScavTrap a;
    ScavTrap b("Scavy");
    ScavTrap c(b);
    ClapTrap *d = new ScavTrap("Wut");
    std::cout << std::endl;
    a.attack("Enemy");
    b.attack("Enemy");
    d->attack("Another enemy");
    std::cout << std::endl;
    a.takeDamage(104);
    b.takeDamage(99);
    std::cout << std::endl;
    a.beRepaired(10);
    b.beRepaired(10);
    std::cout << std::endl;
    a.guardGate();
    b.guardGate();
    std::cout << std::endl;
    delete d;
    return 0;
}*/
