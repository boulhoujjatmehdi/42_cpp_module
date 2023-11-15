#include "Form.hpp"


//implement orthodox//
Form::Form(): Name("default"), isSigned(false), grade(150), eGrade(150){

    // cout << "Form default constructor called" << endl;
}

Form::~Form(){
    // cout << "Form destructor called" << endl;
}

Form::Form(Form& obj): Name(obj.Name), isSigned(obj.isSigned), grade(obj.grade), eGrade(obj.eGrade){
    // cout << "Form copy constructor called" << endl;
}

Form& Form::operator=(Form& obj){
    // cout << "Form assignement operator called" << endl;
    if (this == &obj)
        return *this;
    this->isSigned = obj.isSigned;
    return *this;
}
//implement orthodox//--end

Form::Form(string name, int grade, int egrade): Name(name), isSigned(false), grade(grade), eGrade(egrade){
    if(grade > 150 || eGrade > 150 )
        throw Form::GradeTooLowException();
    if(grade < 1 || eGrade < 1)
        throw Form::GradeTooHighException();
}           

const char* Form::GradeTooHighException::what() const _NOEXCEPT{
    return "Grade too high";
}

const char* Form::GradeTooLowException::what() const _NOEXCEPT{
    return "Grade too low";
}

//implement getters//--begin
string Form::getName() const{
    return this->Name;
}

bool Form::getIsSigned() const{
    return this->isSigned;
}

int Form::getGrade() const{
    return this->grade;
}

int Form::getEGrade() const{
    return this->eGrade;
}

//implement getters//--end

std::ostream& operator<< (std::ostream& os,const Form& obj)
{
    os << "Form name: " << obj.getName() << " | Grade: "<< obj.getGrade() << " | Execution Grade :"<< obj.getEGrade();
    return os;
}

void Form::beSigned(Bureaucrat& obj){
    if (obj.getGrade() > this->grade)
        throw Form::GradeTooLowException();
    else
        this->isSigned = true;
}
