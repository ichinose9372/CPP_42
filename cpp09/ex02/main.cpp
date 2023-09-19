/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:32:56 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/18 13:51:08 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool check_input_argument(char **argv)
{
	argv++;
	while (*argv)
	{
		std::string arv(*argv);
		if (arv.empty())
		{
			std::cout << "empty argument " << std::endl;
			return false;
		}
		bool isPositiveInteger = true;
		for (std::string::size_type i = 0; i < arv.length(); i++) 
		{
			if (!std::isdigit(arv[i])) 
			{
				isPositiveInteger = false;
				break;
			}
		}
		if (!isPositiveInteger || arv[0] == '-') 
		{
			std::cout << "bad argument " << std::endl;
			return false;
		}
		argv++;
	}
	return true;
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Invalid argument 足りない" << std::endl;
		return (1);
	}
	if (!check_input_argument(argv))
		return (1);
	PmergeMe pmerge(argv);
	std::cout << "Before:  ";
	pmerge.print_deque();
	std::cout << '\n';
	// merge insert sort 
	pmerge.merge_insert_sort();
	std::cout << "After:  ";
	pmerge.print_deque();
	std::cout << '\n';
	
	
	// std::cout << GREEN << "OK !!" << std::endl;
	return (0);
}