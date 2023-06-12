/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:34:40 by eboulhou          #+#    #+#             */
/*   Updated: 2023/06/12 12:01:50 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main ()
{
    Zombie *zombies = zombieHorde(5, "mehid");
    // for (int i = 0; i < 5; i++) {
    // zombies[i].announce();
    // }
    zombies = zombieHorde(5, "mehdiboulhoujjat");
    delete[] zombies;
    cin.get();
}