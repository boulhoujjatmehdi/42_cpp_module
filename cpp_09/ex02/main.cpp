/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:51:08 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/27 19:31:56 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "PmergeMe.hpp"


int main(int ac, char** av)
{
    if(ac == 1)
        return 1;
    list<int> lst;
    vector<int> vec;
    // try
    // {
        fill_args_in_list(lst, av);
        copy_container(lst, vec);
        sort_list(vec);
    // }catch(int ext)
    // {
    //     cout << "Error"<< endl;
    //     exit(ext);
    // }
}