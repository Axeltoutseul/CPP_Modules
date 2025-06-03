#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("clap");
    ClapTrap b(a);
    a.attack("Foo");
    return 0;
}
