/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:38:56 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/09 14:50:02 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    string _target;
public:
    //orthodox
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm& obj);
    RobotomyRequestForm& operator=(RobotomyRequestForm& obj);
    //orthodox
    RobotomyRequestForm(string target);
    class FormIsNotSignedException;
    class ExecutorLowGradeException;
    void execute(Bureaucrat const & executor) const;
};

class RobotomyRequestForm::FormIsNotSignedException: public std::exception
{
    const char* what() const _NOEXCEPT;
};

class RobotomyRequestForm::ExecutorLowGradeException:public std::exception
{
    const char* what() const _NOEXCEPT;
};
