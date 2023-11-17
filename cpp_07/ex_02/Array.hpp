/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:22:19 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/17 10:58:26 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

using std::cout;
using std::endl;

template<typename T>
class Array
{
    T *array;
    size_t size;
public:
    //orthodox
    Array();
    ~Array();
    Array(const Array &src);
    Array &operator=(const Array &src);
    //orthodox
    T& operator[](int p); 
    
    Array(size_t n);

};


#include "Array.tpp"