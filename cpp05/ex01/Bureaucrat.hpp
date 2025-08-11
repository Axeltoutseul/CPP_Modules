#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat {

    public:

    Bureaucrat(void);
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &src);
    ~Bureaucrat(void);
    Bureaucrat &operator=(const Bureaucrat &src);
    std::string getName(void);
    int getGrade(void);

    class GradeTooLowException : public std::exception {

        public:

        GradeTooLowException();
        virtual ~GradeTooLowException(void) throw();


        private:

        std::string _message;
    };

    class GradeTooHighException : public std::exception {

        public:

        GradeTooHighException();
        virtual ~GradeTooHighException(void) throw();


        private:

        std::string _message;
    };


    private:

    const std::string _name;
    int _grade;
};

#endif
