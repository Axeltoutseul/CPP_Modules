#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal {

    public:

    Animal(void);
    Animal(std::string name);
    Animal(const Animal &src);
    virtual ~Animal(void) = 0;
    Animal &operator=(const Animal &src);
    virtual std::string getType(void) const;
    virtual void makeSound(void) const = 0;


    protected:

    std::string type;
};

#endif
