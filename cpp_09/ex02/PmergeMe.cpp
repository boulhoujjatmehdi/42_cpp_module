/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:53:25 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/28 18:46:10 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int count = 0;

int check_if_valid_number(char *number)
{
    char *remaining;
    int pure_int = strtol(number, &remaining, 10 );
    if(*remaining)
        throw 1;
    return pure_int;
}

void fill_args_in_list(list<int>& lst, char** av)
{
    (void)lst;
    av++;
    while(*av)
    {
        lst.push_back(check_if_valid_number(*av));
        av++;
    }
}

void swap_pair(pairOfVecotrs& pv)
{
    if( ++count && pv.first.back() > pv.second.back())
    {
        vector<int> tmp;
        tmp = pv.first;
        pv.first = pv.second;
        pv.second = tmp;
    }
}


void back_to_list(const vectorOfPairs& vp, vector<int>& lst)
{
    lst.clear();
    for (vectorOfPairs::const_iterator it = vp.cbegin(); it != vp.cend(); it++)
    {
        for(vector<int>::const_iterator itt = it->first.cbegin(); itt != it->first.cend(); itt++)
            lst.push_back(*itt);
        for(vector<int>::const_iterator itt = it->second.cbegin(); itt != it->second.cend(); itt++)
            lst.push_back(*itt);
    }
}

void convertToVector(vector<int>& lst,const listOfVectors& mc)
{
    lst.clear();
    listOfVectors::const_iterator cit = mc.begin();
    for (; cit != mc.end(); cit++)
    {
        vector<int>::const_iterator it = cit->begin();
        for(; it != cit->end(); it++)
            lst.push_back(*it);
    }
    print_container(lst);
    
}

//prints to delete //TODO 
void printPerPairs(const vectorOfPairs& vp)
{
    for (vectorOfPairs::const_iterator it = vp.cbegin(); it != vp.cend(); it++)
    {
        cout << "[";
        for(vector<int>::const_iterator itt = it->first.cbegin(); itt != it->first.cend(); itt++)
            cout << *itt<<" ";
        cout << "|";
        for(vector<int>::const_iterator itt = it->second.cbegin(); itt != it->second.cend(); itt++)
            cout << *itt<< " ";
        cout << "]";
    }
    cout << endl;
}
void print_list(const listOfVectors& lst)
{
    listOfVectors::const_iterator it = lst.begin();
    for (; it != lst.end(); it++)
    {
        cout << "list :";
        print_container(*it);
    }
}

void merging(vector<int>& lst, int P, int N)
{
    vector<int>::iterator it = lst.begin();
    vectorOfPairs vp;
    pairOfVecotrs pv;
    for (int j = 0; j < P; j++)
    {
        for (int k = j; k < j + N; k++)
        {
            if(k < j + N /2)
                pv.first.push_back(*it);
            else
                pv.second.push_back(*it);
                it++;
        }
        swap_pair(pv);
        vp.push_back(pv);
        pv.first.clear();
        pv.second.clear();
    }
    back_to_list(vp, lst);
    
}



void mainChainPend(listOfVectors& mc, listOfVectors& pd, listOfVectors& mcc , const vectorOfPairs& vp, vector<int>& remaining)
{
    vectorOfPairs::const_iterator it = vp.begin();
    for (;it != vp.end(); it++)
    {
        if(it == vp.begin())
        {
            mc.push_back(it->first);
            mc.push_back(it->second);
        }
        else
        {
            pd.push_back(it->first);
            mc.push_back(it->second);
        }
        mcc.push_back(it->second);
    }
    if(!remaining.empty())
        pd.push_back(remaining);
}

bool customCompare(vector<int> v1, vector<int> v2)
{
    count ++;
    if(v1.back() < v2.back())
        return true;
    return false;
}
bool compair(vector<int> v1, vector<int> v2)
{
    if(v1.back() < v2.back())
        return true;
    return false;
}

void inserting(listOfVectors& mc, listOfVectors& pd, listOfVectors& mcc)
{
    listOfVectors::iterator it = pd.begin();
    listOfVectors::iterator it_comp = mcc.begin();
    listOfVectors::iterator it_pos;
    it_comp++;
    listOfVectors::iterator lower;
    for (; it != pd.end(); it++)
    {   
        
        if(it_comp != mcc.end())
        {
            // cout << "first: " << it->front() << " second: " << it_comp->front() << endl;
            it_pos = std::lower_bound(mc.begin(), mc.end(), *it_comp, compair);
            // cout << it_pos->front() << ", " << it_pos->back() << endl;
            lower = std::lower_bound(mc.begin(), it_pos, *it, customCompare);
        }
        else
            lower = std::lower_bound(mc.begin(), mc.end(), *it, customCompare);
            
        mc.insert(lower, *it);
        if(it_comp != mcc.end())
            it_comp ++;
        
    }
    // pd.clear();
    (void)mcc;
}



void inserting(listOfVectors& mc, listOfVectors& pd)
{
    (void)mc;
    listOfVectors::iterator it = pd.begin();
    listOfVectors::iterator itt = pd.begin();
    // listOfVectors::iterator it_mc = mc.begin();
    listOfVectors::iterator it_pos;
    listOfVectors::iterator lower;
    int tk;
    int tk1;
    int added = 1;
    // cout << "mehdi boulhoujjat "<< endl;
    for (size_t k = 2; k < pd.size(); k++)
    {
        tk = (std::pow(2, k + 1) + pow(-1, k)) / 3;
        tk1 = (std::pow(2, k ) + pow(-1, k-1)) / 3 + 1;
        
        for (; tk >= tk1; tk--)
        {
            //insertion here
            it_pos = mc.begin();
            iterator_increment(it_pos, mc, tk+added);
            itt = pd.begin();
            iterator_increment(itt, pd, tk-2);
            cout << "****";
            print_container(*itt);
            // lower = std::lower_bound(mc.begin(), it_pos, *it, customCompare);
            // mc.insert(lower, *it);
            // print_container(*lower);
            cout <<"tk: "<<  tk - 2 << endl;
            it++;
            added ++;
            if(it== pd.end())
                return ;
        }
    }
}


void insertion(vector<int>&lst, int P, int N, vector<int>& remaining)
{
    listOfVectors mainChain;
    listOfVectors mcCompair;
    listOfVectors pend;
    vectorOfPairs vp;
    pairOfVecotrs pv;
    vector<int>::iterator it = lst.begin();
    for (int j = 0; j < P; j++)
    {
        for (int k = j; k < j + N; k++)
        {
            if(k < j + N /2)
                pv.first.push_back(*it);
            else
                pv.second.push_back(*it);
                it++;
        }
        vp.push_back(pv);
        pv.first.clear();
        pv.second.clear();
    }
    printPerPairs(vp);
    mainChainPend(mainChain, pend, mcCompair, vp, remaining);
    
    // inserting(mainChain, pend, mcCompair);
    inserting(mainChain, pend);
    pend.clear();
    
    convertToVector(lst, mainChain);
}

void setRemaining(vector<int> lst,vector<int>& remaining, int P)
{
    (void)remaining;
    int diff = lst.size() - P;
    if(diff)
    {
        
        vector<int>::iterator it = std::next(lst.begin(), P);
        remaining.assign(it, lst.end());
        
    }
}


void sorting(vector<int>& lst)
{
    static int i = 1;
    vector<int> remaining;
    int S = lst.size()/2 * 2;
    int P = S / std::pow(2, i);
    int N = std::pow(2, i);
    cout << "S: "<< S<< " P: "<< P<< " N: " <<N << endl;
    setRemaining(lst, remaining, N*P);
    merging(lst, P, N);
    i++;
    if(P > 1)
        sorting(lst);

    cout << "S: "<< S<< " P: "<< P<< " N: " <<N << endl;
    // print_container(remaining);
    insertion(lst, P, N, remaining);
    cout << "----------------------------------------"<< count<<  endl;
    
}
