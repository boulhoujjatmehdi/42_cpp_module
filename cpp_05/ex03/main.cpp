

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <math.h>

int main()
{
    try
    {
        {
            // Bureaucrat mehdi("mehdi", 22);
            // Bureaucrat ayac("ayac");
            // AForm *fr2 = new RobotomyRequestForm("home");
            // fr2->beSigned(mehdi);
            // fr2->execute(mehdi);
            // delete fr2;
        }
        {
            // cout << "------------------------------------------------"<< endl;
            // Bureaucrat mehdi("mehdi", 75);
            // AForm *form = new ShrubberyCreationForm();
            // form->beSigned(mehdi);
            // cout <<"form sign : " << (form->getIsSigned()? "true": "false") << endl;
            // delete form;
        }
        {
            // cout << "------------------------------------------------"<< endl;
            // Bureaucrat mehdi("mehdi", 1);
            // Bureaucrat ayac("ayac", 120);
            // AForm *form = new PresidentialPardonForm("PRESIDENT");
            // form->beSigned(mehdi);
            // // form->execute(mehdi);
            // mehdi.executeForm(*form);
            // delete form;
        }
        {
            cout << "------------------------------------------------"<< endl;
            Intern someRandomIntern;
            AForm* rrf;
            rrf = someRandomIntern.makeForm("robotomy request", "Bender");
            cout << *rrf << endl;
            delete(rrf);
            rrf = someRandomIntern.makeForm("shrubbery creation", "shrubbery");
            cout << *rrf << endl;
            delete(rrf);
            rrf = someRandomIntern.makeForm("presidential pardon", "pardon");
            cout << *rrf << endl;
            delete(rrf);
        }


    }
    catch(std::exception &e)
    {
        cout <<"Exception :"<< e.what()<< endl;
    }
    catch(...)
    {
        cout << "Unknown Exception" << endl;
    }
}