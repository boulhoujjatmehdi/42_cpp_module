/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:21:24 by eboulhou          #+#    #+#             */
/*   Updated: 2023/06/10 20:26:57 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
    Zombie **zombies  = (Zombie **)malloc(sizeof(Zombie *)* 10);
    for (int i = 0;i < 10 ; i++)
    {
        string str = "mehdi-";
        str += to_string(i);
        zombies[i] = newZombie(str);
        zombies[i]->announce();
    }
    randomChump("mehdi");
    for(int i = 0 ; i < 10 ; i++)
    {
        delete zombies[i];
    }
}