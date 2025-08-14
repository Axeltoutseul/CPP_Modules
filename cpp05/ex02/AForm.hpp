#ifndef AFORM_HPP
#define AFORM_HPP
#include <sstream>
#include "Bureaucrat.hpp"

class AForm {

    public:

    AForm();
    AForm(const std::string name, int grade_to_sign, int grade_to_execute);
    AForm(const AForm &src);
    virtual ~AForm();
    AForm &operator=(const AForm &src);
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

std::ostream &operator<<(std::ostream &os, AForm &obj);

#endif
