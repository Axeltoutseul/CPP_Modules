#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Dog *new_dog = new Dog();
    const Dog *another_dog(new_dog);
    const WrongAnimal* wra = new WrongAnimal();
    const WrongAnimal* wrc = new WrongCat();
    std::cout << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << new_dog->getType() << " " << std::endl;
    std::cout << another_dog->getType() << " " << std::endl;
    std::cout << wra->getType() << " " << std::endl;
    std::cout << wrc->getType() << " " << std::endl << std::endl;
    meta->makeSound();
    j->makeSound();
    i->makeSound();
    new_dog->makeSound();
    another_dog->makeSound();
    wra->makeSound();
    wrc->makeSound();
    std::cout << std::endl;
    delete meta;
    delete j;
    delete i;
    delete new_dog;
    delete wra;
    delete wrc;
    return 0;
}
