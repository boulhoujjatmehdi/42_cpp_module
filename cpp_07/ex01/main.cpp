/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:52:27 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/25 17:22:04 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void  my_toupper(const char& c)
{
    cout << static_cast<char>(std::toupper(c))<< endl;
}
void  increment (const int& i)
{
    cout << i + 1<< endl;
}

int main()
{
	char a[20] = "mehdi boulhoujjat";
	iter(a, 5, my_toupper);
	int nbs[10] = {0,10,20,30,40,50,60,70,80,90};
	iter(nbs, 5, increment);
}
