#include "AForm.hpp"


//implement orthodox//
AForm::AForm(): Name("default"), isSigned(false), grade(150), eGrade(0){
    // cout << "AForm default constructor called" << endl;
}

AForm::~AForm(){
    // cout << "AForm destructor called" << endl;
}

AForm::AForm(AForm& obj): Name(obj.Name), isSigned(obj.isSigned), grade(obj.grade), eGrade(obj.eGrade){
    // cout << "AForm copy constructor called" << endl;
}

AForm& AForm::operator=(AForm& obj){
    // cout << "AForm assignement operator called" << endl;
    if (this == &obj)
        return *this;
    this->isSigned = obj.isSigned;
    return *this;
}
//implement orthodox//--end

AForm::AForm(string name): Name(name), isSigned(false), grade(150), eGrade(0){
    // cout << "AForm constructor called" << endl;
}           

const char* AForm::GradeTooHighException::what() const _NOEXCEPT{
    return "Grade too high";
}

const char* AForm::GradeTooLowException::what() const _NOEXCEPT{
    return "Grade too low";
}

//implement getters//--begin
string AForm::getName() const{
    return this->Name;
}

bool AForm::getIsSigned() const{
    return this->isSigned;
}

int AForm::getGrade() const{
    return this->grade;
}

int AForm::getEGrade() const{
    return this->eGrade;
}
//implement getters//--end

std::ostream& operator<< (std::ostream& os, AForm& obj)
{
    os << "AForm name: " << obj.getName();
    return os;
}

void AForm::beSigned(Bureaucrat& obj){
    if (obj.getGrade() > this->grade)
        throw AForm::GradeTooLowException();
    else
        this->isSigned = true;
}

AForm::AForm(string name, int grade, int eGrade): Name(name), isSigned(false), grade(grade), eGrade(eGrade){
    // cout << "AForm constructor called" << endl;
}

//implement setters//--begin

void AForm::setIsSigned(bool isSigned){
    this->isSigned = isSigned;
}

void AForm::setGrade(int grade){
    this->grade = grade;
}

void AForm::setEGrade(int eGrade){
    this->eGrade = eGrade;
}

//implement setters//--end