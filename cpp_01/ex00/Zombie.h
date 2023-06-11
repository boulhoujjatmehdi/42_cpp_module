/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 20:11:50 by eboulhou          #+#    #+#             */
/*   Updated: 2023/06/10 20:13:36 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_H
# define ZOMBIE_H

# include "Zombie.hpp"

Zombie* newZombie( string name );
void randomChump( std::string name );
#endif