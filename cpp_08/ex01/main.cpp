/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:16:05 by eboulhou          #+#    #+#             */
/*   Updated: 2023/12/04 11:40:35 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

int main()
{
    try
    {
        Span a(20);
        a.addNumber(9999);//add a single number 9999;
        a.randomRange(10);//add random 10 numbers 
        a.listNumbers();//print the span
        
        vector<int> vct;//just to get the iterator
        vct.push_back(11);
        vct.push_back(22);
        vct.push_back(33);
        vct.push_back(44);
        vct.push_back(55);
        
        a.addRange(vct.begin(), vct.end());
        a.listNumbers();
        cout << "shortestSpan : " << a.shortestSpan()<< endl;
        cout << "longestSpan : " << a.longestSpan()<< endl;
    }catch(const char * err)
    {
        cout <<"ERROR : " << err <<endl;
    }
}