#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP
#include "AForm.hpp"
#include <bits/stdc++.h>

class RobotomyRequestForm : public AForm {

    public:

    RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &src);
    ~RobotomyRequestForm();
    std::string getTarget() const;
    void execute(Bureaucrat const &employee) const;


    private:

    std::string _target;
};

#endif
