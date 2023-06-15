/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:23:48 by eboulhou          #+#    #+#             */
/*   Updated: 2023/06/15 14:48:17 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    cout << name << " attacks with their "<< weapon->getType() << endl;
}
HumanB::HumanB(string name, Weapon& weapon): name(name) , weapon(&weapon){};
HumanB::HumanB(string name): name(name){};

void HumanB::setWeapon(Weapon &weap)
{
    weapon = &weap;
}
