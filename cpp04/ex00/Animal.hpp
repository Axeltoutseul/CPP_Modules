#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal {

    public:

    Animal(void);
    Animal(std::string name);
    Animal(const Animal &src);
    virtual ~Animal(void);
    Animal &operator=(const Animal &src);
    std::string getType(void) const;
    virtual void makeSound(void) const;


    protected:

    std::string type;
};

#endif
