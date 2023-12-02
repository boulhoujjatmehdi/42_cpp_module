/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:53:25 by eboulhou          #+#    #+#             */
/*   Updated: 2023/12/02 19:26:17 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

extern int count;




//printing 
template <typename T>
void printContainer(const T& lst)
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

//prints to delete //TODO 
template <typename T>
void iterator_increment(typename T::iterator& it,const T& lst, int nb)
{
    while(nb--)
    {
        if(it != lst.end())
            it++;
    }
}


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

template <typename T>
void swap_pair(pair<T,T>& pv)
{
    if( ++count && pv.first.back() > pv.second.back())
    {
        T tmp;
        tmp = pv.first;
        pv.first = pv.second;
        pv.second = tmp;
    }
}

template <typename T ,typename P>
void back_to_list(const T& vp, P& lst)
{
    lst.clear();
    for (typename T::const_iterator it = vp.cbegin(); it != vp.cend(); it++)
    {
        for (typename T::value_type::first_type::const_iterator itt = it->first.cbegin(); itt != it->first.cend(); itt++)
            lst.push_back(*itt);
        for (typename T::value_type::second_type::const_iterator itt = it->second.cbegin(); itt != it->second.cend(); itt++)
            lst.push_back(*itt);
    }
}

void convertToVector(vector<int>& lst,const vectorOfVectors& mc)
{
    lst.clear();
    vectorOfVectors::const_iterator cit = mc.begin();
    for (; cit != mc.end(); cit++)
    {
        vector<int>::const_iterator it = cit->begin();
        for(; it != cit->end(); it++)
            lst.push_back(*it);
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

void mainChainPend(vectorOfVectors& mc, vectorOfVectors& pd, const vectorOfPairs& vp, vector<int>& remaining)
{
    vectorOfPairs::const_iterator it = vp.begin();
    for (;it != vp.end(); it++)
    {
        if(it == vp.begin())
        {
            mc.push_back(it->first);
            mc.push_back(it->second);
            pd.push_back(it->first);
        }
        else
        {
            pd.push_back(it->first);
            mc.push_back(it->second);
        }
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

void push_the_one(size_t position, size_t range_pos, vectorOfVectors& mc, vectorOfVectors& pd)
{
    vectorOfVectors::iterator mc_range_stop = mc.begin();
    vectorOfVectors::iterator item_to_push = pd.begin();

    iterator_increment(mc_range_stop, mc, range_pos);
    iterator_increment(item_to_push, pd, position);
    vectorOfVectors::iterator lower = std::lower_bound(mc.begin(), mc_range_stop, *item_to_push, customCompare);
    mc.insert(lower, *item_to_push);
}

void inserting(vectorOfVectors& mc, vectorOfVectors& pd)
{
    (void)mc;
    vector<int> pushed;
    int nb_of_added = 0;
    vectorOfVectors::iterator itToCount = ++pd.begin();
    // int nbofinserted;
    // print_list(pd);
    if(pd.size() == 1)
        return ;
    for (size_t i = 2; i < pd.size()+555; i ++)
    {
        int jacobStart = (std::pow(2, i) - std::pow(-1, i)) / 3; //(2^i - (-1)^i) /3 if i == 1 >> jack == 1
        int jacobEnd   = (std::pow(2, i - 1) - std::pow(-1, i - 1))/3 + 1; // (2^(i - 1) - (-1)^ (i - 1)/ 3 + 1
        // cout << "******start: "<< jacobStart << " end: " << jacobEnd<< endl;
        for (; jacobStart >= jacobEnd; jacobStart--)
        {
            // cout << "size: (" << pd.size() << ")  ";
            if((size_t)jacobStart > pd.size())
            {
                // cout << "skip" << endl;
                continue;
            }
            // cout << "start = ("<< jacobStart << ") end = (" << jacobEnd << ")" << endl;
            pushed.push_back(jacobStart-1);
            push_the_one(jacobStart-1, jacobStart + nb_of_added, mc, pd);
            nb_of_added++;
            if(++itToCount == pd.end())
            {
                // cout << "pushed : ";
                // print_container(pushed);
                return;
            }
        }
        // cout << "------"<< endl;
    }
    


}


void insertion(vector<int>&lst, int P, int N, vector<int>& remaining)
{
    vectorOfVectors mainChain;
    vectorOfVectors pend;
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
    mainChainPend(mainChain, pend, vp, remaining);
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
    setRemaining(lst, remaining, N*P);
    merging(lst, P, N);
    i++;
    if(P > 1)
        sorting(lst);
    insertion(lst, P, N, remaining);
    
}
