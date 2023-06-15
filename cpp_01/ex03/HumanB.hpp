/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:18:57 by eboulhou          #+#    #+#             */
/*   Updated: 2023/06/15 14:46:53 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    string name;
    Weapon *weapon;
    
public:
    void attack();
    HumanB(string name, Weapon& weapon);
    HumanB(string name);
    HumanB();
    
    void setWeapon(Weapon& weap);
};

#endif