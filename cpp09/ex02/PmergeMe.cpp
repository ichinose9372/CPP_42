/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:19:16 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/18 13:55:55 by yichinos         ###   ########.fr       */
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
		this->data = other.data;
	}
	return (*this);
}

void PmergeMe::print_deque(void)
{
	for (std::deque<unsigned int>::iterator it = data.begin(); it != data.end(); ++it)
	{
		
		std::cout << *it << " ";
	}
}


void PmergeMe::merge_insert_sort(void)
{
	
}


PmergeMe::PmergeMe(char **argv)
{
	argv++;
	while (*argv)
	{
		std::string arv(*argv);
		std::istringstream str(arv);
		std::string token;
		while (std::getline(str, token, ' '))
		{
			data.push_back(std::stoi(token));
		}
		argv++;
	}
}
