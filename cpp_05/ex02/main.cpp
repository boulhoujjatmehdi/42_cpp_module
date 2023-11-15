

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{



    try
    {
        {
            cout << "------------------------------------------------"<< endl;
            Bureaucrat mehdi("mehdi", 44);
            Bureaucrat ayac("ayac");
            AForm *fr2 = new RobotomyRequestForm("home");//75 45;
            cout << *fr2 << endl;
            fr2->beSigned(mehdi);
            fr2->execute(mehdi);
            delete fr2;
        }
        {
            cout << "------------------------------------------------"<< endl;
            Bureaucrat mehdi("mehdi", 137);
            AForm *form = new ShrubberyCreationForm("TARGET");//145 137 is the grade to sign the form
            form->beSigned(mehdi);
            form->execute(mehdi);
        }
        {
            cout << "------------------------------------------------"<< endl;
            Bureaucrat mehdi("mehdi", 5);
            Bureaucrat ayac("ayac", 25);
            AForm *form = new PresidentialPardonForm("PRESIDENT");// 25 5
            form->beSigned(ayac);
            mehdi.executeForm(*form);
        }
    }
    catch(std::exception &e)
    {
        cout <<"Exception :"<< e.what()<< endl;
    }
}