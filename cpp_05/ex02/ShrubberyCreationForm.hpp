#pragma once

#include "AForm.hpp"
#include <fstream>
class ShrubberyCreationForm : public AForm
{
    //orthodox //TODO: set target
    string _target;
public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm& obj);
    ShrubberyCreationForm& operator=(ShrubberyCreationForm& obj);
    //orthodox
    ShrubberyCreationForm(string target);
    void execute(Bureaucrat const & executor) const;
    
};