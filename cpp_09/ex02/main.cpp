/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:51:08 by eboulhou          #+#    #+#             */
/*   Updated: 2023/12/01 13:02:29 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "PmergeMe.hpp"

int  checkIfSorted(const vector<int>& vec)
{
    vector<int>::const_iterator it = vec.begin();
    int last = *it;
    it++;
    for (; it  != vec.end(); it++)
    {
        if(*it < last)
            return 1;
        last = *it;
    }
    return 0;
}

int main(int ac, char** av)
{
    if(ac == 1)
        return 1;
    list<int> lst;
    vector<int> vec;
    try
    {
        fill_args_in_list(lst, av);
        copy_container(lst, vec);
        sorting(vec);
        cout << "end"<<endl;
        print_container(vec);
        if(checkIfSorted(vec))
            cout << "ERROR" << endl;
        else
        cout <<  "ALL OK-_-";
    }catch(int ext)
    {
        cout << "Error"<< endl;
        exit(ext);
    }
}