#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

    public:

    Cat(void);
    Cat(std::string name);
    Cat(const Cat &src);
    ~Cat(void);
    Cat &operator=(const Cat &src);
    void makeSound(void) const;


    private:

    Brain *brain;
};

#endif
