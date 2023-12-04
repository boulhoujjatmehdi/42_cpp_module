/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:16:10 by eboulhou          #+#    #+#             */
/*   Updated: 2023/12/04 13:06:17 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

class Span
{
private:
    size_t _N;
    vector<int> _span;
public:
    //orthodox
    Span();
    Span(const Span &src);
    Span &operator=(const Span &src);
    ~Span();
    //orthodox
    Span(int N);
    void addNumber(int number);
    void listNumbers();
    size_t shortestSpan();
    size_t longestSpan();

    void randomRange(int nb);//my function
    template<typename T>
    void addRange(T from, T to);
    
};

template<typename T>
void Span::addRange(T from, T to)
{
    // typename T::iterator it;
    if(std::distance(from, to)+_span.size() > _N)
        throw "not enaugh space!";
    while (from != to)
    {
        this->_span.push_back(*from);
        from ++;
    }

}