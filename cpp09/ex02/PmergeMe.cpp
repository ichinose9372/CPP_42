/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:19:16 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/24 12:49:00 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}
PmergeMe::PmergeMe(const PmergeMe &other)
{
	*this = other;	
}
PmergeMe::~PmergeMe(){}
PmergeMe& PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other)
	{
		list_data = other.list_data;
		vector_data = other.vector_data;
	}
	return (*this);
}

void PmergeMe::print_data(void)
{
	std::vector<unsigned int>::iterator it = vector_data.begin();
	std::cout << "vector: ";
	while (it != vector_data.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << '\n';
	std::list<unsigned int>::iterator it2 = list_data.begin();
	std::cout << "list: ";
	while (it2 != list_data.end())
	{
		std::cout << *it2 << " ";
		it2++;
	}
}

PmergeMe::PmergeMe(char **argv)
{
	for (int i = 1; argv[i]; i++)
	{
		int num;
		std::istringstream str(argv[i]);
		if (str >> num && num >= 0)
		{
			list_data.push_back(num);
			vector_data.push_back(num);
		}
		else
		{
			std::cout << RED << "Error: Invalid argument" << NORMAL << std::endl;
			throw std::invalid_argument("Error: Invalid argument");
		}
	}
}

void PmergeMe::merge_insert_sort_list(std::list<unsigned int> &list)
{
	// Base case: If the list size is small, consider it sorted.
    
}
void PmergeMe::sort(void)
{
	merge_insert_sort_list(list_data);
	//print_data();
	std::list<unsigned int>::iterator it = list_data.begin();
	for (; it != list_data.end(); it++)
	{
		std::cout << *it << " ";
	}
	
}


