/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:52:58 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/25 17:00:00 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::endl;

template<typename T>
void iter(T *a, int size, void (*fun)(const T&))
{
    if(!a)
        return ;
    for (int i = 0; i < size; i++)
    {
        fun(a[i]);
    }
}