#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "j->type = " << j->getType() << std::endl;
    std::cout << "i->type = " << i->getType() << std::endl << std::endl;
    delete j;
    delete i;
    std::cout << "\n-------------------------------------------" << std::endl;

    int size = 10;
    const Animal* animals[size];
    int nb = 0;
    while (nb < size)
    {
        if (nb % 2 == 0)
            animals[nb] = new Dog();
        else
            animals[nb] = new Cat();
        nb++;
    }
    nb = 0;
    while (nb < size)
    {
        std::cout << "The animal #" << nb + 1 << " is a " << animals[nb]->getType() << std::endl;
        nb++;
    }
    std::cout << std::endl;
    nb = 0;
    while (nb < size)
        delete animals[nb++];
    return 0;
}
