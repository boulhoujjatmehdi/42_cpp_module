/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:16:05 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/22 17:37:02 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

int main()
{
    try
    {
    Span a(100);
    a.randomRange(10);
    a.listNumbers();
    vector<int> vct;
    vct.push_back(11);
    vct.push_back(12);
    vct.push_back(13);
    vct.push_back(14);
    vct.push_back(15);
    
    a.addRange(vct.begin(), vct.end()+1);
    a.listNumbers();
    cout << "shortestSpan : " << a.shortestSpan()<< endl;
    cout << "longestSpan : " << a.longestSpan()<< endl;
    }catch(const char * err)
    {
        cout <<"ERROR : " << err <<endl;
    }
}