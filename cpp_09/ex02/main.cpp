/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:51:08 by eboulhou          #+#    #+#             */
/*   Updated: 2023/12/03 11:38:30 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "PmergeMe.hpp"
int count = 0;

template <typename T>
int  checkIfSorted(const T& vec)
{
    typename T::const_iterator it = vec.begin();
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
    sortingVector(vec);
    clock_t end = clock();
    double ticks = static_cast<double>(end - start);
    return ticks;
}

double usingListContainer (list<int>& vec)
{
    clock_t start = clock();
    sortingList(vec);
    clock_t end = clock();
    double ticks = static_cast<double>(end - start);
    return ticks;
}



int main(int ac, char** av)
{
    if(ac > 2)
    {
        list<int> lst;
        vector<int> vec;
        list <int> beforeList;
        vector <int> beforeVector;
        try
        {
            fillArgsInContainer(beforeList, av);
            fillArgsInContainer(beforeVector, av);
            vec = beforeVector;
            lst = beforeList;
            double vecTime = usingVectorContainer(vec);
            double lstTime = usingListContainer(lst);
            count /= 2;
                cout << "Before: ";
                printContainer(beforeVector);
                cout << "After:  ";
                printContainer(vec);
                // cout << "comparisons: "<< count<< endl;//TODO:: REMOVE BEFORE PUSHING
                cout << "Time to process a range of "<< vec.size()<< " elements with std::vector : "<< vecTime <<" us"<< endl;
                cout << "Time to process a range of "<< vec.size()<< " elements with std::vector : "<< lstTime <<" us"<< endl;
        }catch(int ext)
        {
            cout << "Error"<< endl;
            
            exit(ext);
        }
    }
    else
    {
        cout << "Enter at least two numbers!!"<< endl;
        return 0;
    }
}