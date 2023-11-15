#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
using std::string;
using std::cout;
using std::endl;

class Bureaucrat;
class Form
{
private:
    const string Name;
    bool isSigned;
    const int grade;
    const int eGrade;
public:
    //orthodox//->begin
    Form();
    ~Form();
    Form(Form& obj);
    Form& operator=(Form& obj);
    //orthodox//->end
    Form(string name, int grade, int egrade);
    class GradeTooHighException;
    class GradeTooLowException;
    void beSigned(Bureaucrat& obj);

    //getters//->begin
    string getName() const;
    bool getIsSigned() const;
    int getGrade() const;
    int getEGrade() const;
    //getters//->end

};

class Form::GradeTooHighException: public std::exception 
{
    const char* what() const _NOEXCEPT;
};

class Form::GradeTooLowException: public std::exception 
{
    const char* what() const _NOEXCEPT;
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif