/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 16:43:53 by eboulhou          #+#    #+#             */
/*   Updated: 2023/06/19 10:13:08 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl;
}
void Harl::info()
{
    cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< endl;
}

void Harl::warning()
{
    cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
}
void Harl::error()
{
    cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain( std::string level )
{
    std::map<string, void(Harl::*)()> functionMap;
    functionMap["DEBUG"] = &Harl::debug;
    functionMap["INFO"] = &Harl::info;
    functionMap["WARNING"] = &Harl::warning;
    functionMap["ERROR"] = &Harl::error;
    
    std::map<string, void (Harl::*)()>::iterator functionIt = functionMap.find(level);
    if(functionIt != functionMap.end())
    {
        void (Harl::*functionPtr)() = functionIt->second;
        (this->*functionPtr)();
    }


    (void)level;
}
