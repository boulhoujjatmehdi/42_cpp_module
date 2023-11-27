/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:20:35 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/25 17:35:35 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once //guard

template<typename T>
void swap(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}
template<typename T>
T& max(T& a, T& b)
{
    if(a > b)
        return a;
    else
        return b;
}
template<typename T>
T& min(T& a, T& b)
{
    if( a < b)
        return a;
    else
        return b;
}
