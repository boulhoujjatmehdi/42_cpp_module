/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:43:59 by eboulhou          #+#    #+#             */
/*   Updated: 2023/12/04 10:15:35 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<class T>
int easyfind(T& list , int i)
{
    typename T::iterator it = std::find(list.begin(), list.end(), i);
    if(it == list.end())
        return 0;
    return 1;
}
