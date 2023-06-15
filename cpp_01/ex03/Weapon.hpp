/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:00:36 by eboulhou          #+#    #+#             */
/*   Updated: 2023/06/15 15:58:29 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Weapon
{
    string Type;
public:
    string	getType();
    void	setType(string type);

    Weapon(string type):Type(type){};
    Weapon(){};
};

    
#endif