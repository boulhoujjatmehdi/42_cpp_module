/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:37:43 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/21 12:52:55 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <ctime>

using std::cout;
using std::endl;

class Base
{
    
public:
    //orthodox
    Base();
    Base(const Base &src);
    Base &operator=(const Base &src);
    virtual ~Base();
    //canonical
};
