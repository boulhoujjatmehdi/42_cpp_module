/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:01:50 by eboulhou          #+#    #+#             */
/*   Updated: 2023/06/12 13:23:09 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(string name)
{
    Name = name;
}
Zombie::Zombie(){
}

Zombie::~Zombie()
{
    cout << Name << " destroyed" << endl;
}

void Zombie::announce(void)
{
    cout << Name << " BraiiiiiiinnnzzzZ..." << endl;
}