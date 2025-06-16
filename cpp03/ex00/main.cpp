#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Klap");
    a.attack("Human");
    a.takeDamage(8);
    a.beRepaired(3);
    return 0;
}

/*int main(void)
{
    ClapTrap a("Klap");
    ClapTrap b;
    ClapTrap c = b;
    std::cout << std::endl;
    a.attack("Human");
    b.attack("Human");
    std::cout << std::endl;
    a.takeDamage(11);
    b.takeDamage(5);
    std::cout << std::endl;
    a.beRepaired(3);
    b.beRepaired(2);
    std::cout << std::endl;
    return 0;
}*/
