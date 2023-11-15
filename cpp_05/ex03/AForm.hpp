#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
using std::string;
using std::cout;
using std::endl;

class Bureaucrat;
class AForm
{
private:
    const string Name;
    bool isSigned;
    const int grade;
    const int eGrade;
public:
    //orthodox//->begin
    AForm();
    virtual ~AForm();
    AForm(AForm& obj);
    AForm& operator=(AForm& obj);
    //orthodox//->end
    AForm(string name);
    AForm(string name, int grade, int eGrade);
    class GradeTooHighException;
    class GradeTooLowException;
    void beSigned(Bureaucrat& obj);

    //getters//->begin
    string getName() const;
    bool getIsSigned() const;
    int getGrade() const;
    int getEGrade() const;
    //getters//->end

    //setters//->begin
    void setIsSigned(bool isSigned);
    //setters//->end



    virtual void execute(Bureaucrat const & executor) const = 0;

};

class AForm::GradeTooHighException: public std::exception 
{
    const char* what() const _NOEXCEPT;
};

class AForm::GradeTooLowException: public std::exception 
{
    const char* what() const _NOEXCEPT;
};

std::ostream& operator<< (std::ostream& os, const AForm& obj);

#endif