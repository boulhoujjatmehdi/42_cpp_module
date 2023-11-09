/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:56:05 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/09 16:54:36 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("default", 145, 137){
}
ShrubberyCreationForm::~ShrubberyCreationForm(){
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& obj): AForm(obj.getName(), obj.getGrade(), obj.getEGrade()){
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& obj){
    this->setIsSigned(obj.getIsSigned());
    return *this;
}
ShrubberyCreationForm::ShrubberyCreationForm(string target): AForm("default", 145, 137), _target(target)
{
    
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(this->getIsSigned() && this->getEGrade() >= executor.getGrade())
    {
        std::ofstream file;
        file.open(executor.getName() + "_shrubbery");
        if(file.is_open())
        {
            file << 
                "###########################'`################################"<< endl <<
                "###########################  V##'############################"<< endl <<
                "#########################V'  `V  ############################"<< endl <<
                "########################V'      ,############################"<< endl <<
                "#########`#############V      ,A###########################V"<< endl <<
                "########' `###########V      ,###########################V',#"<< endl <<
                "######V'   ###########l      ,####################V~~~~'',###"<< endl <<
                "#####V'    ###########l      ##P' ###########V~~'   ,A#######"<< endl <<
                "#####l      d#########l      V'  ,#######V~'       A#########"<< endl <<
                "#####l      ##########l         ,####V''         ,###########"<< endl <<
                "#####l        `V######l        ,###V'   .....;A##############"<< endl <<
                "#####A,         `######A,     ,##V' ,A#######################"<< endl <<
                "#######A,        `######A,    #V'  A########'''''##########''"<< endl <<
                "##########,,,       `####A,           `#''           '''  ,,,"<< endl <<
                "#############A,                               ,,,     ,######"<< endl <<
                "######################oooo,                 ;####, ,#########"<< endl <<
                "##################P'                   A,   ;#####V##########"<< endl <<
                "#####P'    ''''       ,###             `#,     `V############"<< endl <<
                "##P'                ,d###;              ##,       `V#########"<< endl <<
                "##########A,,   #########A              )##,    ##A,..,ooA###"<< endl <<
                "#############A, Y#########A,            )####, ,#############"<< endl <<
                "###############A ############A,        ,###### ##############"<< endl <<
                "###############################       ,#######V##############"<< endl <<
                "###############################      ,#######################"<< endl <<
                "##############################P    ,d########################"<< endl <<
                "##############################'    d#########################"<< endl <<
                "##############################     ##########################"<< endl <<
                "##############################     ##########################"<< endl <<
                "#############################P     ##########################"<< endl <<
                "#############################'     ##########################"<< endl <<
                "############################P      ##########################"<< endl <<
                "###########################P'     ;##########################"<< endl <<
                "###########################'     ,###########################"<< endl <<
                "##########################       ############################"<< endl <<
                "#########################       ,############################"<< endl <<
                "########################        d###########P'    `Y#########"<< endl <<
                "#######################        ,############        #########"<< endl <<
                "######################        ,#############        #########"<< endl <<
                "#####################        ,##############b.    ,d#########"<< endl <<
                "####################        ,################################"<< endl <<
                "###################         #################################"<< endl <<
                "##################          #######################P'  `V##P'"<< endl <<
                "#######P'     `V#           ###################P'"<< endl <<
                "#####P'                    ,#################P'"<< endl <<
                "###P'                      d##############P''"<< endl <<
                "##P'                       V##############'"<< endl <<
                "#P'                         `V###########'"<< endl <<
                "#'                             `V##P'"<< endl;
            file.close();
            cout << "ascii tree is in the file"<< endl;
        }
    }
    else
        throw ShrubberyCreationForm::GradeTooLowException();

}
