

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


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
        }
        cout << "------------------------------------------------"<< endl;
        {
            // Bureaucrat mehdi("mehdi", 150);
            // AForm *form = new ShrubberyCreationForm();
            // form->beSigned(mehdi);
        }
        cout << "------------------------------------------------"<< endl;
        {
            // Bureaucrat mehdi("mehdi", 1);
            // Bureaucrat ayac("ayac", 120);
            // AForm *form = new PresidentialPardonForm("PRESIDENT");
            // form->beSigned(mehdi);
            // // form->execute(mehdi);
            // mehdi.executeForm(*form);

        }
        {
            Intern someRandomIntern;
            AForm* rrf;
            rrf = someRandomIntern.makeForm("robotomy request", "Bender");
            cout << "egrade" <<rrf->getEGrade() << endl;
            rrf = someRandomIntern.makeForm("shrubbery creation", "shrubbery");
            cout << "egrade" <<rrf->getEGrade() << endl;
            rrf = someRandomIntern.makeForm("presidential pardon", "home");
            cout << "egrade" <<rrf->getEGrade() << endl;
        }
    }
    catch(std::exception &e)
    {
        cout <<"Exception :"<< e.what()<< endl;
    }
}