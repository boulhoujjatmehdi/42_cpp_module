/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:31:49 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/22 20:35:39 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <deque>
#include <vector>


template<typename T>
class MutantStack: public std::stack<T>
{
    //orthodox
    public:
        MutantStack();
        MutantStack(MutantStack const & src);
        virtual ~MutantStack();
        MutantStack & operator=(MutantStack const & rhs);
    //orthodox
    typedef typename std::stack<T>::container_type::iterator iterator; 

};

#include "MutantStack.tpp"