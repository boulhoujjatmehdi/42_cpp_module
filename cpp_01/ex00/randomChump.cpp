/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 20:07:52 by eboulhou          #+#    #+#             */
/*   Updated: 2023/06/10 20:16:33 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"


void randomChump( string name )
{
    Zombie zomb = Zombie(name);
    zomb.announce();
}
