/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:51:33 by eboulhou          #+#    #+#             */
/*   Updated: 2023/12/02 17:45:54 by eboulhou         ###   ########.fr       */
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
typedef vector<vector<int > > vectorOfVectors;

void fill_args_in_list(list<int>& lst, char** av);
void sorting(vector<int>& lst);
void print_list(const listOfVectors& lst);




template<typename T>
void printContainer(const T& lst);






template<typename T,typename P>
void copy_container(const T& src, P& dst)
{
    typename T::const_iterator src_it;
    for (src_it = src.begin(); src_it != src.end(); src_it++)
    {
        dst.push_back(*src_it);
    }
}

#include "PmergeMe.tpp"