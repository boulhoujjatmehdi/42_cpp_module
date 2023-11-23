/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:01:26 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/23 13:23:58 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
typedef map<int, std::pair<string, float> > MyMap;

void split(MyMap& data, string line)
{
    (void)data;
    int idx = data.size();
    cout << idx << endl;
    std::istringstream ist(line);
    string date;
    std::getline(ist, date, ' ');
    string value;
    std::getline(ist, value, ' ');
    data[idx] = std::make_pair(date, 12);
}

void open_files(char* infile)
{
    MyMap input;
    MyMap data;
    std::ifstream infileStream;
    infileStream.open(infile);
    if(!infileStream.is_open())
        throw "infile error!!";
    string line;
    while(std::getline(infileStream, line))
    {
        split(data, line);
    }
}