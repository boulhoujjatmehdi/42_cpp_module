/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:52:58 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/16 13:06:44 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::endl;

template<typename T>
void iter(T *a, int size, T(*fun)(T))
{
    if(!a)
        return ;
    for (int i = 0; i < size; i++)
    {
        a[i] = fun(a[i]);
    }
}