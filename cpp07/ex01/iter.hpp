/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:41:46 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/14 18:19:34 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#define RED "\x1b[31m"
#define NORMAL "\033[0m"
#define GREEN "\x1b[32m" 
#define YELLOW "\x1b[33m"

#include <iostream>

template <typename T>
void iter(T* arry, size_t length, void(*func)(T&))
{
	if (!arry || !*func)
		return ;
	for (size_t i = 0; i < length; i++)
	{
		func(arry[i]);
	}
}

template <typename T>
void iter(const T* arry, size_t length, void(*func)(const T&))
{
	if (!arry || !*func)
		return ;
	for (size_t i = 0; i < length; i++)
	{
		func(arry[i]);
	}
}


template <typename T>
void printarry(const T &a)
{
	std::cout << a << std::endl; 
}


#endif
