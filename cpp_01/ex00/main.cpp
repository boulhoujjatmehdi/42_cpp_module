/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:21:24 by eboulhou          #+#    #+#             */
/*   Updated: 2023/09/13 14:53:33 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
    Zombie *zombies  =  new Zombie[10];
    for (int i = 0;i < 10 ; i++)
    {
        string str = "mehdi-";
        str[5] = '0'+i;
        zombies[i] = Zombie(str);
        zombies[i].announce();
    }
    randomChump("mehdi_stack");
    delete[] zombies;

}