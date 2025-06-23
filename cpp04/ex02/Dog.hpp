#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

    public:

    Dog(void);
    Dog(std::string name);
    Dog(const Dog &src);
    ~Dog(void);
    Dog &operator=(const Dog &src);
    void makeSound(void) const;
    void displayIdeas(void);
    void setIdea(std::string idea, int i);


    private:

    Brain *brain;
};

#endif
