/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:53:25 by eboulhou          #+#    #+#             */
/*   Updated: 2023/12/01 15:30:21 by eboulhou         ###   ########.fr       */
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
            pd.push_back(it->first);
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



void inserting(listOfVectors& mc, listOfVectors& pd , int ii)
{
    ii = 0;
    (void)mc;
    vector<int> tmpvec ;
    tmpvec.push_back(99);
    tmpvec.push_back(99);
    pd.push_front(tmpvec);
    listOfVectors::iterator it = pd.begin();
    it++ ; // toskip the first element in the pd list
    listOfVectors::iterator itt = pd.begin();
    cout << "pend:" << endl;
    print_list(pd);
    cout << "main chain:" << endl;
    print_list(mc);
    listOfVectors::iterator it_pos;
    listOfVectors::iterator lower;
    int jackStart;
    int jackEnd;
    int added = 1;
    cout << "mehdi boulhoujjat "<< endl;
    for (size_t k = 1; k < pd.size(); k++)
    {
        jackStart = (std::pow(2, k + 1) + pow(-1, k)) / 3 - 1;
        jackEnd = (std::pow(2, k ) + pow(-1, k-1)) / 3 ;
        cout <<"jackStart: "<<  jackStart << endl;
        cout <<"jackEnd: "<<  jackEnd << endl;
        
        for (; jackStart >= jackEnd; jackStart--)
        {
                cout << " ****" << pd.size() << " == "<< jackStart << endl;;
            if(static_cast<size_t>(jackStart) < pd.size())
            {
                cout << "****" << pd.size() << " == "<< jackStart << endl;;
                cout << endl;
                //insertion here
                itt = pd.begin();
                iterator_increment(itt, pd, jackStart );
                
                // print_container(*itt);
                // int tkkkk = tk;
                listOfVectors::iterator it_end = mc.begin();
                iterator_increment(it_end, mc, added + jackStart);
                // print_container(*it_end);
                lower = std::lower_bound(mc.begin(), it_end , *itt, customCompare);
                // cout << "compairs :"<< count<< endl;
                mc.insert(lower, *itt);
                it++;
                added ++;
                if(it== pd.end())
                    return ;
            }
        }
        // exit(0) ;
    }
}

void push_the_one(size_t position, size_t range_pos, listOfVectors& mc, listOfVectors& pd)
{
    cout << " position: ("<< position <<")"<< "  range_pos: ("<< range_pos<<")" << endl;
    listOfVectors::iterator mc_range_stop = mc.begin();
    listOfVectors::iterator item_to_push = pd.begin();

    iterator_increment(mc_range_stop, mc, range_pos);
    iterator_increment(item_to_push, pd, position);
    // cout << " itemToPush: ";
    // print_container(*item_to_push);
    // cout << " position : ("<< position<< ")" << "mc.size(): ("<< mc.size()<< ")"<<endl;
    listOfVectors::iterator lower = std::lower_bound(mc.begin(), mc_range_stop, *item_to_push, customCompare);
    mc.insert(lower, *item_to_push);
}

void inserting(listOfVectors& mc, listOfVectors& pd)
{
    (void)mc;
    vector<int> pushed;
    int nb_of_added = 0;
    // listOfVectors::iterator itToInsert;
    listOfVectors::iterator itToCount = ++pd.begin();
    // int nbofinserted;
    // print_list(pd);
    if(pd.size() == 1)
        return ;
    for (size_t i = 2; i < pd.size()+555; i ++)
    {
        int jacobStart = (std::pow(2, i) - std::pow(-1, i)) / 3; //(2^i - (-1)^i) /3 if i == 1 >> jack == 1
        int jacobEnd   = (std::pow(2, i - 1) - std::pow(-1, i - 1))/3 + 1; // (2^(i - 1) - (-1)^ (i - 1)/ 3 + 1
        cout << "******start: "<< jacobStart << " end: " << jacobEnd<< endl;
        for (; jacobStart >= jacobEnd; jacobStart--)
        {
            cout << "size: (" << pd.size() << ")  ";
            if((size_t)jacobStart > pd.size())
            {
                cout << "skip" << endl;
                continue;
            }
            cout << "start = ("<< jacobStart << ") end = (" << jacobEnd << ")" << endl;
            pushed.push_back(jacobStart-1);
            push_the_one(jacobStart-1, jacobStart + nb_of_added, mc, pd);
            nb_of_added++;
            if(++itToCount == pd.end())
            {
                cout << "pushed : ";
                print_container(pushed);
                return;
            }
        }
        cout << "------"<< endl;
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
    print_container(remaining);
    insertion(lst, P, N, remaining);
    cout << "----------------------------------------"<< count<<  endl;
    
}
