/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:46:49 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/21 13:04:13 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Data.hpp"
using std::cout;
using std::endl;

class Serializer
{
    //orthodox
        Serializer();
        Serializer(const Serializer &src);
        ~Serializer();
        Serializer &operator=(const Serializer &rhs);
    //canonical
    public:
        static uintptr_t  serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};