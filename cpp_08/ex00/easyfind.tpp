/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:43:59 by eboulhou          #+#    #+#             */
/*   Updated: 2023/11/17 15:48:49 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
int easyfind(T& list , int i)
{
    typename T::iterator it = std::find(list.begin(), list.end(), i);
    if(it == list.end())
        return 0;
    return 1;
}