#pragma once

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
    
public:
    AForm* new_shrubbry(string target);
    AForm* new_robomomy(string target);
    AForm* new_presidential(string target);


    AForm* makeForm(string name, string target);
};



