/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:44:09 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/15 10:08:51 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
//orthodox  
RobotomyRequestForm::RobotomyRequestForm():AForm("RobotomyRequestForm", 72, 45), _target("DefTarget"){
    // cout << "RobotomyRequestForm default constructor called"<< endl;
}
RobotomyRequestForm::~RobotomyRequestForm(){
    //cout << "RobotomyRequestForm destructor called" << endl;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& obj){
    *this = obj;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& obj)
{
    this->setIsSigned(obj.getIsSigned());
    this->_target = obj._target;
    return *this;
}
//orthodox
RobotomyRequestForm::RobotomyRequestForm(string target):AForm("RobotomyRequestForm", 72, 45), _target(target){
}
const char* RobotomyRequestForm::FormIsNotSignedException::what() const _NOEXCEPT
{
    return "This Form Is Not Signed!!!";
}
const char* RobotomyRequestForm::ExecutorLowGradeException::what() const _NOEXCEPT
{
    return "Executor's Grade Is Low To Execute!!!";
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(this->getIsSigned() && this->getEGrade() >= executor.getGrade())
    {
        cout << "Drrrrrererrrrrrrrrrerererrrrrererrrrrrr"<< endl;
        srand(time(nullptr));
        if(rand() % 2)
            cout << this->_target<<" Has Been Robotomized"<< endl;
        else
            cout << "Robotomy Failed"<< endl;
    }
    else if(!this->getIsSigned())
        throw RobotomyRequestForm::FormIsNotSignedException();
    else if(this->getEGrade() < executor.getGrade())
        throw RobotomyRequestForm::ExecutorLowGradeException();
}