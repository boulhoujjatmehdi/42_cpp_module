/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:06:31 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/23 12:27:45 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"



int main(int ac, char**av)
{
    if(ac != 2)
        return 1;
    try
    {
        
        open_files(av[1]);
    
    }catch(const char* msg)
    {
        std::cerr << "ERROR : " << msg << endl;
    }
}