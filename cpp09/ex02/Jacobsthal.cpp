/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Jacobsthal.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:09:30 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/10/18 16:09:46 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Jacobsthal.hpp"

int Jacob_make(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	return Jacob_make(n - 1) + 2 * Jacob_make(n - 2);
}

std::list<int> create_jacoblist(unsigned long size)
{
	std::list <int> jacobNumbers;
	while (1)
	{
		unsigned long jacobNumber = Jacob_make(jacobNumbers.size());
		if (jacobNumber > size )
		{
			jacobNumbers.push_back(jacobNumber);
			break;
		}
		jacobNumbers.push_back(jacobNumber);
	}
	if (size == 2)
	{
		jacobNumbers.back() = 2;
	}
	std::list <int> jacobList;
	std::list <int>::iterator itJacob = jacobNumbers.begin();
	int index;
	int prev_index = 0;
	while (itJacob != jacobNumbers.end())
	{
		index = *itJacob;
		if (index == 0)
		{
			itJacob++;
			continue;
		}
		if (index == 1 && prev_index == 1)
		{
			itJacob++;
			continue;
		}
		jacobList.push_back(index);
		while (jacobList.back() - 1 != prev_index)
		{
			jacobList.push_back(jacobList.back() - 1);
		}	
		prev_index = index;
		itJacob++;
	}
	return (jacobList);
}