#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
using std::string;
using std::cout;
using std::endl;

class Form
{
private:
    const string Name;
    bool isSigned;
    int grade;
    int eGrade;
public:
    //orthodox//->begin
    Form();
    ~Form();
    Form(Form& obj);
    Form& operator=(Form& obj);
    //orthodox//->end

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

std::ostream& operator<< (std::ostream& os, const Form& obj);

#endif