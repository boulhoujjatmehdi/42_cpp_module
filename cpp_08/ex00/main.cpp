/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:58:21 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/17 15:52:50 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main()
{
    
    std::vector<double> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    cout << "easyfind : " << easyfind(v, 9) << endl;
}