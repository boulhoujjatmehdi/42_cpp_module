#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    string _target;
public:
    //orthodox
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm& obj);
    PresidentialPardonForm& operator=(PresidentialPardonForm& obj);
    //orthodox
    PresidentialPardonForm(string target);
    class FormIsNotSignedException;
    class ExecutorLowGradeException;
    
    void execute(Bureaucrat const & executor) const;
};

class PresidentialPardonForm::FormIsNotSignedException: public std::exception
{
    const char* what() const _NOEXCEPT;
};

class PresidentialPardonForm::ExecutorLowGradeException:public std::exception
{
    const char* what() const _NOEXCEPT;
};
