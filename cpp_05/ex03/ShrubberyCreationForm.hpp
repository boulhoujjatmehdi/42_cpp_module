#pragma once

#include "AForm.hpp"
#include <fstream>
class ShrubberyCreationForm : public AForm
{
    string _target;
    //orthodox 
public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm& obj);
    ShrubberyCreationForm& operator=(ShrubberyCreationForm& obj);
    //orthodox
    ShrubberyCreationForm(string target);
    void execute(Bureaucrat const & executor) const;
    
};