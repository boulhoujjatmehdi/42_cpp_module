/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:31:49 by eboulhou          #+#    #+#             */
/*   Updated: 2023/12/04 12:38:19 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <deque>
#include <vector>

using std::cout;
using std::endl;


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
    typedef typename std::stack<T>::container_type::reverse_iterator iterator;

    iterator begin()
    {
        return this->c.rbegin();
    }
    iterator end()
    {
        return this->c.rend();
    }

};

#include "MutantStack.tpp"