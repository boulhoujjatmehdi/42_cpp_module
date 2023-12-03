/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:53:25 by eboulhou          #+#    #+#             */
/*   Updated: 2023/12/03 11:44:23 by eboulhou         ###   ########.fr       */
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
//printing

template <typename T>
void iterator_increment(typename T::iterator& it,const T& lst, int nb)
{
    while(nb--)
    {
        if(it != lst.end())
            it++;
    }
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

int check_if_valid_number(char *number)
{
    char *remaining;
    int pure_int = strtol(number, &remaining, 10 );
    if(*remaining || pure_int < 0)
        throw 1;
    return pure_int;
}

template <typename T>
void fillArgsInContainer(T& lst, char** av)
{
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
    for (typename T::const_iterator it = vp.begin(); it != vp.end(); it++)
    {
        for(typename P::const_iterator itt = it->first.begin(); itt != it->first.end(); itt++)
            lst.push_back(*itt);
        for(typename P::const_iterator itt = it->second.begin(); itt != it->second.end(); itt++)
            lst.push_back(*itt);
    }
}
template <typename T , typename P>
void convertToVector(T& lst,const P& mc)
{
    lst.clear();
    typename P::const_iterator cit = mc.begin();
    for (; cit != mc.end(); cit++)
    {
        typename T::const_iterator it = cit->begin();
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

void merging(list<int>& lst, int P, int N)
{
    list<int>::iterator it = lst.begin();
    listOfPairs vp;
    pairOfLists pv;
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

template <typename T, typename P, typename D>
void mainChainPend(T& mc, T& pd, const P& vp, D& remaining)
{
    typename P::const_iterator it = vp.begin();
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


bool customCompareV(const vector<int>& v1, const vector<int>& v2)
{
    count ++;
    if(v1.back() < v2.back())
        return true;
    return false;
}
bool customCompareL(const list<int>& v1, const list<int>& v2)
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
    vectorOfVectors::iterator lower = std::lower_bound(mc.begin(), mc_range_stop, *item_to_push, customCompareV);
    mc.insert(lower, *item_to_push);
}

void push_the_one(size_t position, size_t range_pos, listOfLists& mc, listOfLists& pd)
{
    listOfLists::iterator mc_range_stop = mc.begin();
    listOfLists::iterator item_to_push = pd.begin();

    iterator_increment(mc_range_stop, mc, range_pos);
    iterator_increment(item_to_push, pd, position);
    listOfLists::iterator lower = std::lower_bound(mc.begin(), mc_range_stop, *item_to_push, customCompareL);
    mc.insert(lower, *item_to_push);
}


void jacobsthall_inserting(vectorOfVectors& mc, vectorOfVectors& pd)
{
    (void)mc;
    vector<int> pushed;
    size_t nb_of_added = 0;
    if(pd.size() == 1)
        return ;
    for (size_t i = 2; i < pd.size()+555; i ++)
    {
        int jacobStart = (std::pow(2, i) - std::pow(-1, i)) / 3; //(2^i - (-1)^i) /3 if i == 1 >> jack == 1
        int jacobEnd   = (std::pow(2, i - 1) - std::pow(-1, i - 1))/3 + 1; // (2^(i - 1) - (-1)^ (i - 1)/ 3 + 1
        for (; jacobStart >= jacobEnd; jacobStart--)
        {
            if((size_t)jacobStart > pd.size())
                continue;
            pushed.push_back(jacobStart-1);
            push_the_one(jacobStart-1, jacobStart + nb_of_added, mc, pd);
            nb_of_added++;
            if(nb_of_added +1 >= pd.size())
                return;
            
        }
    }
}

void jacobsthall_inserting(listOfLists& mc, listOfLists& pd)
{
    (void)mc;
    vector<int> pushed;
    size_t nb_of_added = 0;
    if(pd.size() == 1)
        return ;
    for (size_t i = 2; i < pd.size()+555; i ++)
    {
        int jacobStart = (std::pow(2, i) - std::pow(-1, i)) / 3; //(2^i - (-1)^i) /3 if i == 1 >> jack == 1
        int jacobEnd   = (std::pow(2, i - 1) - std::pow(-1, i - 1))/3 + 1; // (2^(i - 1) - (-1)^ (i - 1)/ 3 + 1
        for (; jacobStart >= jacobEnd; jacobStart--)
        {
            if((size_t)jacobStart > pd.size())
                continue;
            pushed.push_back(jacobStart-1);
            push_the_one(jacobStart-1, jacobStart + nb_of_added, mc, pd);
            nb_of_added++;
            if(nb_of_added +1 >= pd.size())
                return;
            
        }
    }
}


void insertion(vector<int>&lst, int P, int N, vector<int>& remaining)
{
    vectorOfPairs vp;
    vectorOfVectors mainChain;
    vectorOfVectors pend;
    pairOfVecotrs pv;
    
    vector<int>::iterator it = lst.begin();
    for (int j = 0; j < P; j++)
    {
        for (int k = j; k < j + N; k++)
        {
            if(k < j + N /2)
            {   
                pv.first.push_back(*it);
            }
            else
            {
                pv.second.push_back(*it);
            }
            it++;
        }
        vp.push_back(pv);
        pv.first.clear();
        pv.second.clear();
    }
    mainChainPend(mainChain, pend, vp, remaining);
    jacobsthall_inserting(mainChain, pend);
    pend.clear();
    
    convertToVector(lst, mainChain);
}

void insertion(list<int>&lst, int P, int N, list<int>& remaining)
{
    // vector<pair<vector<int>, vector<int> > > vp;
    listOfPairs vp;
    listOfLists mainChain;
    listOfLists pend;
    pairOfLists pv;
    
    list<int>::iterator it = lst.begin();
    for (int j = 0; j < P; j++)
    {
        for (int k = j; k < j + N; k++)
        {
            if(k < j + N /2)
            {   
                pv.first.push_back(*it);
            }
            else
            {
                pv.second.push_back(*it);
            }
            it++;
        }
        vp.push_back(pv);
        pv.first.clear();
        pv.second.clear();
    }
    mainChainPend(mainChain, pend, vp, remaining);
    jacobsthall_inserting(mainChain, pend);
    pend.clear();
    
    convertToVector(lst, mainChain);
}

template <typename T>
void setRemaining(T lst,T& remaining, int P)
{
    (void)remaining;
    int diff = lst.size() - P;
    if(diff)
    {
        typename T::iterator it = lst.begin();
        iterator_increment(it,lst, P);
        
        remaining.assign(it, lst.end());
    }
}

void sortingVector(vector<int>& lst)
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
        sortingVector(lst);
    insertion(lst, P, N, remaining);
}

void sortingList(list<int>& lst)
{
    static int i = 1;
    list<int> remaining;
    int S = lst.size()/2 * 2;
    int P = S / std::pow(2, i);
    int N = std::pow(2, i);
    setRemaining(lst, remaining, N*P);
    merging(lst, P, N);
    i++;
    if(P > 1)
        sortingList(lst);
    insertion(lst, P, N, remaining);
}
