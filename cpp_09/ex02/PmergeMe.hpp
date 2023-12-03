/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:51:33 by eboulhou          #+#    #+#             */
/*   Updated: 2023/12/03 11:22:12 by eboulhou         ###   ########.fr       */
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
typedef vector<vector<int > > vectorOfVectors;

typedef pair<list<int>, list<int> > pairOfLists; 
typedef list<pairOfLists> listOfPairs;
typedef list<list<int > > listOfLists;

void sortingVector(vector<int>& lst);
void sortingList(list<int>& lst);




template<typename T>
void printContainer(const T& lst);

template <typename T>
void fillArgsInContainer(T& lst, char** av);




template<typename T,typename P>
void copy_container(const T& src, P& dst);

#include "PmergeMe.tpp"