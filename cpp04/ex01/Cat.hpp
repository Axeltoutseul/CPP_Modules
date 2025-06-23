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
    void displayIdeas(void);
    void setIdea(std::string idea, int i);


    private:

    Brain *brain;
};

#endif
