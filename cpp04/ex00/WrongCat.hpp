#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

    public:

    WrongCat(void);
    WrongCat(std::string name);
    WrongCat(const WrongCat &src);
    ~WrongCat(void);
    WrongCat &operator=(const WrongCat &src);
    void makeSound(void) const;
};

#endif
