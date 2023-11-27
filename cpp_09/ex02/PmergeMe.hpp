/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:51:33 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/27 19:29:56 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

#include <list>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::list;
using std::pair;

typedef pair<vector<int>, vector<int> > pairOfVecotrs; 
typedef vector<pairOfVecotrs> vectorOfPairs;
typedef list<vector<int> > listOfVectors;

void fill_args_in_list(list<int>& lst, char** av);
void sort_list(vector<int>& lst);
void print_list(const listOfVectors& lst);









template<typename T>
void print_container(const T& lst)
{
    typename T::const_iterator it;
    it = lst.begin();
    while(it != lst.end())
    {
        cout << *it << " ";
        it ++;
    }
    cout << endl;
}



template<typename T,typename P>
void copy_container(const T& src, P& dst)
{
    typename T::const_iterator src_it;
    for (src_it = src.begin(); src_it != src.end(); src_it++)
    {
        dst.push_back(*src_it);
    }
}