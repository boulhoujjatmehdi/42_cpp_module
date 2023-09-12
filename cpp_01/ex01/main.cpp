/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:34:40 by eboulhou          #+#    #+#             */
/*   Updated: 2023/09/12 17:36:19 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main ()
{
    Zombie *zombies = zombieHorde(10, "mehdi ");

    for (int i = 0; i < 10; i++)
    {
        zombies[i].announce();
    }
    delete[] zombies;

    system("leaks progName");
}