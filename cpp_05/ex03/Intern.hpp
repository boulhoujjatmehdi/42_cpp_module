#pragma once

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
    
public:
    //orhtodox
    Intern();
    ~Intern();
    Intern(Intern& obj);
    Intern& operator=(Intern& obj);
    //orhtodox

    AForm* new_shrubbry(string target);
    AForm* new_robomomy(string target);
    AForm* new_presidential(string target);


    AForm* makeForm(string name, string target);
};



