#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat {

    public:

    Bureaucrat();
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &src);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &src);
    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    void displayInfos();
    void executeForm(AForm const &form);

    class GradeTooLowException : public std::exception {

        public:
        const char *what() const throw() {
            return "The grade is too low";
        }
    };

    class GradeTooHighException : public std::exception {

        public:
        const char *what() const throw() {
            return "The grade is too high";
        }
    };


    private:

    const std::string _name;
    int _grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif
