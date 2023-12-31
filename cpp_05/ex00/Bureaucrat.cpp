

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(string name): _Name(name), _Grade(150){}

std::ostream& operator<< ( std::ostream& os,const Bureaucrat& obj)
{
    os << obj.getName() << ", bureaucrat grade "<< obj.getGrade();
    return os;
};

Bureaucrat::Bureaucrat(): _Name("Name"), _Grade(150)
{
    // cout << "Default constructor called!" << endl;
}

Bureaucrat::~Bureaucrat()
{
    // cout << "Destructor called!" << endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
    // cout << "Copy constructor called!" << endl;
    *this = obj;
}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& obj)
{
    // cout << "Assignation operator called!" << endl;
    if (this != &obj)
    {
        this->_Grade = obj._Grade;
    }
    return (*this);
}

Bureaucrat::Bureaucrat(string name, int grade): _Name(name){
    if(grade >= 1 && grade <= 150)
        this->_Grade = grade;
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

int Bureaucrat::getGrade() const
{
    return (this->_Grade);
}

string Bureaucrat::getName() const
{
    return (this->_Name);
}

void Bureaucrat::incrementGrade()
{
    if (this->_Grade == 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_Grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->_Grade == 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_Grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Too high grade";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}
