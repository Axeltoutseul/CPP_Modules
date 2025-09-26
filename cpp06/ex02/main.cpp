#include "Base.hpp"

Base *generate(void)
{
    Base *new_base = NULL;
    srand(time(NULL));
    int nb = rand() % 3;
    if (nb == 0)
        new_base = new A();
    else if (nb == 1)
        new_base = new B();
    else
        new_base = new C();
    return new_base;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    if (dynamic_cast<A*>(&p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(&p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(&p))
        std::cout << "C" << std::endl;
}

int main()
{
    Base *new_base = generate();
    identify(new_base);
    //identify(*new_base);
    delete new_base;
    return 0;
}
