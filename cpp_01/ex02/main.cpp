/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:26:21 by eboulhou          #+#    #+#             */
/*   Updated: 2023/09/12 17:55:57 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::printf;
using std::string;

int main()
{
    string str = "HI THIS IS BRAIN";
    string *stringPTR = &str;
    string &stringREF = str;

    cout << &str << endl;
    cout << stringPTR << endl;
    cout << &stringREF << endl;

    cout << str << endl;
    cout << *stringPTR << endl;
    cout << stringREF << endl;
    
}