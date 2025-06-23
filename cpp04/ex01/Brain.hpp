#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain {

    public:

    Brain(void);
    Brain(const Brain &src);
    ~Brain(void);
    Brain &operator=(const Brain &src);
    void displayIdeas(void);
    std::string getIdea(int i);
    void setIdea(std::string idea, int i);

    private:

    std::string ideas[100];
};

#endif
