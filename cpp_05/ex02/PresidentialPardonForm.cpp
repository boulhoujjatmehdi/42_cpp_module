/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:05:42 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/15 09:36:51 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("Presidnetial", 25, 5), _target("DefTarget"){}

PresidentialPardonForm::~PresidentialPardonForm(){
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& obj)
{
    *this = obj;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& obj)
{
    this->setIsSigned(obj.getIsSigned());
    return *this;
}
const char* PresidentialPardonForm::FormIsNotSignedException::what() const _NOEXCEPT
{
    return "This Form Is Not Signed!!!";
}
const char* PresidentialPardonForm::ExecutorLowGradeException::what() const _NOEXCEPT
{
    return "Executor's Grade Is Low To Execute!!!";
}

PresidentialPardonForm::PresidentialPardonForm(string target):AForm("Presidnetial", 25, 5), _target(target){}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if(this->getIsSigned() && executor.getGrade() <= this->getEGrade())
    {
        cout <<_target<<" has been pardoned by Zaphod Beeblebrox" << endl;
    }
    else if(!this->getIsSigned())
        throw PresidentialPardonForm::FormIsNotSignedException();
    else if(executor.getGrade() > this->getEGrade())
        throw PresidentialPardonForm::ExecutorLowGradeException();
}