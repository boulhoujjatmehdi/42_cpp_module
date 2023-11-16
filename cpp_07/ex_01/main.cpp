/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:52:27 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/16 13:22:54 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

char my_toupper(char c)
{
    return toupper(c);
}
int increment (int i)
{
    return i + 1;
}

int main()
{
    char a[20] = "mehdi boulhoujjat";
    // char *aa = NULL;
    ::iter(a, 10, my_toupper);
    cout << a << endl;
    int nbs[10] = {0,10,20,30,40,50,60,70,80,90};
    ::iter(nbs, 10, increment);
    for (int i = 0; i < 10; i++) {
        std::cout << nbs[i] << " ";
    }
    std::cout << std::endl;
}