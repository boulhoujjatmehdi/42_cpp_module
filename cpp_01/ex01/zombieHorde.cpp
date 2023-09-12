/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:37:34 by eboulhou          #+#    #+#             */
/*   Updated: 2023/09/12 17:27:27 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombieList =  new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        name[5] = '0' + i;
        zombieList[i] = Zombie(name);
    }
    return zombieList;
}
