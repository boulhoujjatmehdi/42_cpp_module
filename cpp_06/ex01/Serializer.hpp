/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:46:49 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/13 13:11:48 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Data.hpp"
using std::cout;
using std::endl;

class Serializer
{
    public:
    //orthodox start
        Serializer();
        Serializer(const Serializer &src);
        ~Serializer();
        Serializer &operator=(const Serializer &rhs);
    //ortho end
        uintptr_t  serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
};