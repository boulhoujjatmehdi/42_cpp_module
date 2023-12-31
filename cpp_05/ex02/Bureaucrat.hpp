#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

using std::string;
using std::cout;
using std::endl;

class AForm;

class Bureaucrat
{
    const string    _Name;
    int             _Grade;
public:

    //ORTHODOX//
    Bureaucrat();
    Bureaucrat(const Bureaucrat& obj);
    ~Bureaucrat();
    Bureaucrat& operator= (const Bureaucrat& obj);
    //ORTHODOX//
    Bureaucrat(string name, int grade);
    Bureaucrat(string name);
    int getGrade() const;
    string getName() const;
    class GradeTooHighException;
    class GradeTooLowException;
    void incrementGrade();
    void decrementGrade();

    void signForm(AForm& obj);
    void executeForm(AForm const & form);
};
class Bureaucrat::GradeTooHighException: public std::exception
{
    const char* what()const _NOEXCEPT;
};

class Bureaucrat::GradeTooLowException: public std::exception
{
    const char * what() const _NOEXCEPT;
};

std::ostream& operator<< ( std::ostream& os,const Bureaucrat& obj);

#endif