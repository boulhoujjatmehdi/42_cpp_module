/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:55:09 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/22 20:10:45 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack()
{
    
}

template<typename T>
MutantStack<T>::~MutantStack()
{
    
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& obj)
{
    this->c = obj.c;
    *this = obj;
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& obj)
{
    (void)obj;
    return *this;
}
