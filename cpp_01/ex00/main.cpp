/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:21:24 by eboulhou          #+#    #+#             */
/*   Updated: 2023/09/12 16:33:06 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
    Zombie **zombies  =  (Zombie **)malloc(sizeof(Zombie)* 10);  ;
    for (int i = 0;i < 10 ; i++)
    {
        string str = "mehdi-";
        str += to_string(i);
        zombies[i] = new Zombie(str);
        zombies[i]->announce();
    }
    
    randomChump("mehdi_stack");
    //delete if you want to see the diff betweeen 
    //allocating in heap and stack for the class zombie
    
    for(int i = 0 ; i < 10 ; i++)
    {
        delete zombies[i];
    }
    free(zombies);
}