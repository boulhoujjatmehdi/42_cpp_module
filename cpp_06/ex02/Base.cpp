/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:37:13 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/21 12:52:38 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

//orthodox
Base::Base()
{
}

Base::Base(const Base &src)
{
    *this = src;
}

Base &Base::operator=(const Base &src)
{
    if (this != &src)
    {
    }
    return *this;
}

Base::~Base()
{
}
//canonical
