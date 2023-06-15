/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:18:57 by eboulhou          #+#    #+#             */
/*   Updated: 2023/06/15 15:24:04 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    string name;
    Weapon& weapon;
public:
    void attack();
    HumanA(string nam, Weapon& wep);
};

#endif