/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:06:31 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/25 10:22:45 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"



int main(int ac, char**av)
{
    if(ac != 2)
        return 1;
    try
    {
        
        MyMap input;
        MyMap data;
        streams strms;
        open_files(av[1], strms);
        read_data(strms.second, data);
        executeInput(strms.first, data);
        // string date = "2012-01-10";
        // MyMap::iterator it = data.lower_bound(date);
        // if(--it != data.end())
        //     std::cout << "lower_bound of : (" << date << ")(" << it->first << ")," << it->second << std::endl;
        // MyMap::iterator it1 = data.upper_bound(date);
        // if(--it1 != data.end())
        //     std::cout << "Upper_bound of : (" << date << ")(" << it1->first << ")," << it1->second << std::endl;
            
    }catch(const char* msg)
    {
        std::cerr << "ERROR : " << msg << endl;
    }
}