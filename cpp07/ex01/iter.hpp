/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:41:46 by yichinos          #+#    #+#             */
/*   Updated: 2023/08/30 12:05:47 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T, typename F>
void iter(T* arry, size_t length, F func)
{
	for (size_t i = 0; i < length; i++)
	{
		func(i, arry[i]);
	}
}


template <typename T>
void printarry(size_t num, T a)
{
	std::cout << "arry "  << num << " is " << a << std::endl; 
}



#endif
