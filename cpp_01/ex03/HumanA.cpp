/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:23:48 by eboulhou          #+#    #+#             */
/*   Updated: 2023/06/15 15:28:27 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
    cout << name << " attacks with their "<< HumanA::weapon.getType() << endl;   
}

HumanA::HumanA(string nam, Weapon& wep): name(nam), weapon(wep){};
