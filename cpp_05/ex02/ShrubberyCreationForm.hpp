#pragma once

#include "AForm.hpp"
#include <fstream>
class ShrubberyCreationForm : public AForm
{
    //orthodox 
public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm& obj);
    ShrubberyCreationForm& operator=(ShrubberyCreationForm& obj);
    //orthodox

    void execute(Bureaucrat const & executor) const;
    
};