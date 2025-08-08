#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat {

    public:

    Bureaucrat(void);
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(Bureaucrat &src);
    ~Bureaucrat(void);
    Bureaucrat &operator=(const Bureaucrat &src);
    int GradeTooLowException(void);
    int GradeTooHighException(void);
    std::string getName(void);
    int getGrade(void);


    private:

    const std::string _name;
    int _grade;
};

class GradeTooLowException{

    public:

    GradeTooLowException(std::string message);
    virtual ~GradeTooLowException(void);
    void what(void);


    private:

    std::string _message;
};

class GradeTooHighException{

    public:

    GradeTooHighException(std::string message);
    virtual ~GradeTooHighException(void);
    void what(void);


    private:

    std::string _message;
};

#endif
