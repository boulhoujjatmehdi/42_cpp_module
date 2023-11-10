/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:44:16 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/10 08:54:37 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


AForm* Intern::makeForm(string name, string target)
{
    // Intern table[3] = {&Intern::new_shrubbry(string ),&Intern::new_robomomy(string ),&Intern::new_presidential(string)};
    typedef AForm* (Intern::*PMF)(string);

    PMF table[3] = {&Intern::new_shrubbry, &Intern::new_robomomy, &Intern::new_presidential};
    string names[3] = {"shrubbery creation", "robotomy request","presidential pardon"} ;
    
    for (size_t i = 0; i < 3; i++)
    {
        if(names[i] == name)
        {
            cout << "Intern creates "<< target << endl;
            return (this->*table[i])(target);
        }
    }
    return NULL;
}

    AForm* Intern::new_shrubbry(string target){
        return new ShrubberyCreationForm(target);
    }
    AForm* Intern::new_robomomy(string target)
    {
        return new RobotomyRequestForm(target);
    }
    AForm* Intern::new_presidential(string target)
    {
        return new PresidentialPardonForm(target);
    }