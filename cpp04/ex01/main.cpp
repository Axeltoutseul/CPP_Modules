#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl << std::endl;
    delete j;
    delete i;

    int size = 10;
    const Animal* animals[size];

    int nb = 0;
    while (nb < size)
    {
        if (nb % 2 == 0)
            animals[nb] = new Dog();
        else
            animals[nb] = new Cat();
        std::cout << animals[nb]->getType() << std::endl;
        nb++;
    }
    
    nb = 0;
    while (nb < size)
        delete animals[nb++];
    return 0;
}
