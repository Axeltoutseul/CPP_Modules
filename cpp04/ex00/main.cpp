#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wra = new WrongAnimal();
    const WrongAnimal* wrc = new WrongCat();
    std::cout << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << wra->getType() << " " << std::endl;
    std::cout << wrc->getType() << " " << std::endl << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    wra->makeSound();
    wrc->makeSound();
    std::cout << std::endl;
    delete j;
    delete i;
    delete meta;
    delete wra;
    delete wrc;
    return 0;
}
