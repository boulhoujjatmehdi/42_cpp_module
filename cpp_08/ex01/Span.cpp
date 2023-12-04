/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:20:39 by eboulhou          #+#    #+#             */
/*   Updated: 2023/12/04 11:40:58 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():_N(10)
{
}

Span::~Span()
{}

Span::Span(const Span& obj)
{
    this->_N = obj._N;
    this->_span = obj._span;
}

Span& Span::operator=(const Span& obj)
{
    this->_N = obj._N;
    this->_span = obj._span;
    return *this;
}

Span::Span(int N):_N(N)
{
    
}

void Span::addNumber(int number)
{
    if(_span.size() < _N)
    {
        _span.push_back(number);
    }
    else
    {
        throw "Span reached the limit";
    }
}

void Span::listNumbers()
{
    
    for(vector<int>::iterator it = _span.begin(); it != _span.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

size_t Span::shortestSpan()
{
    int dis;
    vector<int>::iterator it;
    vector<int> tmp = _span;
    std::sort(tmp.begin(), tmp.end());
    if(tmp.size() > 1)
    {
        dis = abs(*tmp.begin() - *(++tmp.begin())) ;
        for(it = tmp.begin(); it != --tmp.end(); it++)
        {
            if( dis > abs(*it - *(it+1)))
                dis = abs(*it - *(it+1));
        }
    }
    else
        throw "shortestSpan no enaugh numers to compare!";
    
    return dis;
}

size_t Span::longestSpan()
{
    vector<int> tmp = _span;
    std::sort(tmp.begin(), tmp.end());
    if(tmp.size() > 1)
        return (*--tmp.end() - *tmp.begin());
    else
        throw "longestSpan no enaugh number to compare!";
}

void Span::randomRange(int nb)
{
    srand(time(NULL));
    for (int i = 0; i < nb; i++)
    {
        addNumber(rand() % 100);
    }
}

