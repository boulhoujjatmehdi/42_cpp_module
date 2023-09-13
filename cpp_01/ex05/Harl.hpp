/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 16:36:54 by eboulhou          #+#    #+#             */
/*   Updated: 2023/09/13 12:40:04 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <>
#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <map>

using std::cout;
using std::endl;
using std::string;

class Harl
{
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    void complain( std::string level );
};

#endif