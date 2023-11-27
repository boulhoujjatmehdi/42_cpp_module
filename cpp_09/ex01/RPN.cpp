/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:51:25 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/27 10:10:34 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int calculate(int v1, int v2, char op)
{
    if(op == '+')
        return v1 + v2;
    else if(op == '-')
        return v1 - v2;
    else if(op == '/')
        return v1 / v2;
    else
        return v1 * v2;
}

void error(int err)
{
    std::cerr << "Error" << endl;;
    exit(err);
}

int rpnFunc(string str)
{
    std::istringstream sstrm(str);
    std::stack<int> stk;
    string st;    
    while(sstrm >> st)
    {
        if(st.length() == 1)
        {
            char c = st[0];
            if(std::isdigit(c))
                stk.push(c - '0');
            else if(c == '-' || c == '+' || c == '/' || c == '*')
            {
                if(stk.size() < 2)
                    error(1);
                int v1, v2;
                v2 = stk.top();
                stk.pop();
                v1 = stk.top();
                stk.pop();
                stk.push(calculate(v1, v2, c));
            }
            else
            {
                error(4);
            }
        }
        else
            error(2);
    }
    if(stk.size() > 1)
        error(3);
    cout << stk.top() << endl;
    return 0;
}