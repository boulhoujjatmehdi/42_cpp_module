/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:32:12 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/17 11:59:06 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"

template<typename T>
Array<T>::Array():array(new T()), size(1){
    
}

template<typename T>
Array<T>::~Array(){
    delete array;
}

template<typename T>
Array<T>::Array(Array const & src){


    array = new T[src.size];
    for (size_t i = 0; i < src.size; i++)
        array[i] = src.array[i];
    size = src.size;
}

template<typename T>
Array<T> & Array<T>::operator=(Array<T> const & src){
    if (this != &src)
    {
        delete array;
        array = new T[src.size];
        for (size_t i = 0; i < src.size; i++)
            array[i] = src.array[i];
        size = src.size;
    }
    return *this;
}

template<typename T>
Array<T>::Array(size_t n):array(new T[n]), size(n){
    
}

template<typename T>
T & Array<T>::operator[](int p)
{
    if(size < 0 || static_cast<unsigned int>(p) >= size)
        throw std::exception();
    return array[p];
}
