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
    void beSigned(Bureaucrat e);
    std::string getDetails();

    class GradeTooLowException : public std::exception {

        public:

        GradeTooLowException();
        virtual ~GradeTooLowException(void) throw();
    };

    class GradeTooHighException : public std::exception {

        public:

        GradeTooHighException();
        virtual ~GradeTooHighException(void) throw();
    };


    private:

    const std::string _name;
    bool _is_signed;
    const int _grade_to_sign;
    const int _grade_to_execute;
};

std::ostream &operator<<(std::ostream &os, Form &obj);

#endif
