#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    //const Animal* another_animal = new Animal();
    std::cout << "j->type = " << j->getType() << std::endl;
    std::cout << "i->type = " << i->getType() << std::endl << std::endl;
    Cat *new_cat = new Cat();
    Cat *another_cat = new Cat(*new_cat);
    delete j;
    delete i;
    delete new_cat;
    delete another_cat;
    return 0;
}
