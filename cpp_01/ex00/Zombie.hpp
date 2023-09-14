/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 18:57:21 by eboulhou          #+#    #+#             */
/*   Updated: 2023/09/12 16:23:24 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

using std::cout;
using std::endl;
using std::string;

class Zombie
{
	string  Name;
public:
	Zombie(string name);
	Zombie();
	~Zombie(void);
	void announce( void );
};

#endif