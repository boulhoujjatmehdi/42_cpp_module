/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:51:08 by eboulhou          #+#    #+#             */
/*   Updated: 2023/12/02 20:31:40 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "PmergeMe.hpp"
int count = 0;
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


double usingVectorContainer (vector<int>& vec)
{
    clock_t start = clock();
    sorting(vec);
    clock_t end = clock();
    double ticks = static_cast<double>(end - start);
    return ticks;
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
        double vecTime = usingVectorContainer(vec);
        if(checkIfSorted(vec))
            cout << "ERROR" << endl;//TODO: REMOVE BEFORE PUSHING
        else
        {
            cout << "Before: ";
            printContainer(lst);
            cout << "After:  ";
            printContainer(vec);
            cout << "comparisons: "<< count<< endl;//TODO:: REMOVE BEFORE PUSHING
            cout << "Time to process a range of "<< vec.size()<< " elements with std::vector : "<< vecTime <<" us"<< endl;
        }
    }catch(int ext)
    {
        cout << "Error"<< endl;
        
        exit(ext);
    }
}