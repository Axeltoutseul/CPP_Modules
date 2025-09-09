#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {

    public:

    RobotomyRequestForm();
    RobotomyRequestForm(const std::string name, int grade_to_sign, int grade_to_execute, const std::string target);
    ~RobotomyRequestForm();
};

#endif
