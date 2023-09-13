/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 16:30:16 by eboulhou          #+#    #+#             */
/*   Updated: 2023/09/12 21:10:28 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl hrl;
    hrl.complain("DEBUG");
    hrl.complain("INFO");
    hrl.complain("ERROR");
    hrl.complain("WARNING");
}
