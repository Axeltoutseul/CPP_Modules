#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP
#include <iostream>

class WrongAnimal {

    public:

    WrongAnimal(void);
    WrongAnimal(std::string name);
    WrongAnimal(const WrongAnimal &src);
    virtual ~WrongAnimal(void);
    WrongAnimal &operator=(const WrongAnimal &src);
    std::string getType(void) const;
    void makeSound(void) const;


    protected:

    std::string type;
};

#endif
