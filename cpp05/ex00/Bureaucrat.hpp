#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat {

    public:

    Bureaucrat();
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &src);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &src);
    std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);
    std::string getName() const;
    int getGrade() const;

    class GradeTooLowException {

        public:

        GradeTooLowException();
        virtual ~GradeTooLowException() throw();
        void what();
    };

    class GradeTooHighException {

        public:

        GradeTooHighException();
        virtual ~GradeTooHighException() throw();
        void what();
    };


    private:

    const std::string _name;
    int _grade;
};

#endif
