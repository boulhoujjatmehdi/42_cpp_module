/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:14:38 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/25 11:12:29 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <ctime>

using std::string;
using std::cout;
using std::endl;
using std::map;

typedef std::pair<std::ifstream, std::ifstream> streams;
typedef map<string, float>  MyMap;

void open_files(char* infile, streams& strms); 
void read_data(std::ifstream& ifstream, MyMap& data);
void executeInput(std::ifstream& istrm,MyMap data);
