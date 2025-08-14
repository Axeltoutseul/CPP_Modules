#ifndef FORM_HPP
#define FORM_HPP
#include <sstream>
#include "Bureaucrat.hpp"

class Form {

    public:

    Form();
    Form(const std::string name, int grade_to_sign, int grade_to_execute);
    Form(const Form &src);
    ~Form();
    Form &operator=(const Form &src);
    void beSigned(Bureaucrat &employee);
    std::string getDetails();

    class GradeTooLowException : public std::exception {

        public:
        const char *what() const throw() {
            return "A grade is too low";
        }
    };

    class GradeTooHighException : public std::exception {

        public:
        const char *what() const throw() {
            return "A grade is too high";
        }
    };


    private:

    const std::string _name;
    bool _is_signed;
    const int _grade_to_sign;
    const int _grade_to_execute;
};

std::ostream &operator<<(std::ostream &os, Form &obj);

#endif
