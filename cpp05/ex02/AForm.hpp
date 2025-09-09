#ifndef AFORM_HPP
#define AFORM_HPP
#include <sstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

    public:

    AForm();
    AForm(const std::string name, int grade_to_sign, int grade_to_execute);
    AForm(const AForm &src);
    virtual ~AForm();

    AForm &operator=(const AForm &src);
    void beSigned(Bureaucrat &employee);
    virtual void execute(Bureaucrat const &employee) const = 0;
    void checkExecution(const Bureaucrat &executor) const;
    std::string getName() const;
    std::string getDetails();

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

    class NotSignedException : public std::exception {

        public:
        const char *what() const throw() {
            return "Form not signed";
        }
    };


    private:

    const std::string _name;
    bool _is_signed;
    const int _grade_to_sign;
    const int _grade_to_execute;
};

std::ostream &operator<<(std::ostream &os, AForm &obj);

#endif
