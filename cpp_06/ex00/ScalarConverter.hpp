/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:09:45 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/21 12:47:28 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <cmath>
#include <cfloat>
#include <string>
#include <cctype>
#include <sstream>

using std::string;
using std::cout;
using std::endl;


class ScalarConverter
{
    
    //orthodox
    ScalarConverter();
    ScalarConverter(const ScalarConverter &src);
    ScalarConverter &operator=(const ScalarConverter &src);
    ~ScalarConverter();
    //canonical
public:
    
    static void convert(string str);
};