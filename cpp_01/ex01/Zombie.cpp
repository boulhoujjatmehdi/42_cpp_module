/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:01:50 by eboulhou          #+#    #+#             */
/*   Updated: 2023/06/12 12:27:51 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(string name)
{
    Name = name;
    cout << "created\n";
}
Zombie::Zombie(){
    cout << "zombie allocated\n";
}

Zombie::~Zombie()
{
    cout << Name << "destroyed"<< endl;
}

void Zombie::announce(void)
{
    cout << Name << "BraiiiiiiinnnzzzZ..."<< endl;
}