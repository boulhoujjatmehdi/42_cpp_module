/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:45:00 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/23 09:40:11 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    {
        cout << "-------------------MUTANTSTACK---------------------"<< endl;
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        // //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();//todo iterator understanding and begin
        
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;
        ++it;
        }
        std::stack<int> s(mstack);
    }    
    //-----------------------------------------
    {
        
        cout << "-------------------DEQUE---------------------"<< endl;
        std::deque<int> mstack;
        mstack.push_back(5);
        mstack.push_back(17);
        std::cout << mstack.back() << std::endl;
        mstack.pop_back();
        std::cout << mstack.size() << std::endl;
        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        // //[...]
        mstack.push_back(0);
        MutantStack<int>::iterator it = mstack.begin();//todo iterator understanding and begin
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;
        ++it;
        }
        std::stack<int> s(mstack);
    }


    return 0;
}