#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Form {

    public:

    Form();
    Form(const Form &src);
    ~Form();
    Form &operator=(const Form &src);
    void beSigned(Bureaucrat e);
    std::string getDetails(const Form &form);

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

std::ostream &operator<<(std::ostream &os, const Form &obj);

#endif
