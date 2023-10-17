/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:19:16 by yichinos          #+#    #+#             */
/*   Updated: 2023/10/17 21:51:26 by ichinoseyuu      ###   ########.fr       */
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

void PmergeMe::print_before(void)
{
	std::vector<int>::iterator it = vector_data.begin();
	std::cout << "Beforr: ";
	while (it != vector_data.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}

void PmergeMe::print_after(void)
{
	std::list<int>::iterator it = sorted_list_data.begin();
	std::cout << "After:  ";
	while (it != sorted_list_data.end())
	{
		if (*it >= 0)
		{
			std::cout << *it << " ";
		}
		it++;
	}
	std::cout << std::endl;
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
			throw std::invalid_argument("Error");
		}
	}
}

bool descendingOrder(int a, int b) {
    return a > b;
}


double PmergeMe::merge_insert_sort_list(std::list<int> &list)
{
	//make pair
	std::clock_t start = clock();
	std::list<int>::iterator it = list.begin();
	while (it != list.end()) 
	{
		int element1 = *it;
		++it;
		if (it != list.end())
		{
			int element2 = *it;
			list_pair.push_back(std::make_pair(element1, element2));
			++it;
		} 
		else
			list_pair.push_back(std::make_pair(element1, -1));
	}
	std::list<std::pair<int, int> >::iterator it2 = list_pair.begin();
	for(; it2 != list_pair.end(); it2++)
	{
		if (it2->first > it2->second)
			std::swap(it2->first, it2->second);
		else if (it2->second == 0)
			continue;
	}
	list_pair.sort();
	insert_sort_list();	
	std::clock_t end = clock();
	return(static_cast<double>(end - start) / CLOCKS_PER_SEC);
}

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

void PmergeMe::insert_sort_list(void)
{
	std::list<std::pair<int, int> >::iterator it = list_pair.begin();
	for(; it != list_pair.end(); it++)
	{
		if (it->first == -1)
		{
			continue;
		}
		sorted_list_data.push_back(it->first);
	}
	std::list<int> jacobList = create_jacoblist(list_pair.size());
	std::list<int>::iterator itJacobList = jacobList.begin();
	while(itJacobList != jacobList.end())
	{	
		unsigned int index = *itJacobList;
		if (index > list_pair.size())
		{
			itJacobList++;
			continue ;
		}
		std::list<std::pair<int, int> >::iterator it2 = list_pair.begin();
		std::list<int>::iterator itSorted = sorted_list_data.begin();
		for(unsigned int i = 1; i < index; i++)
		{ 
			it2++;
			itSorted++;
		}
		while (itSorted != sorted_list_data.end() && *itSorted < it2->second)
		{
			itSorted++;
		}
		if (itSorted == sorted_list_data.end())
			sorted_list_data.push_back(it2->second);
		else
			sorted_list_data.insert(itSorted, it2->second);
		itJacobList++;
	}
}


double PmergeMe::merge_insert_sort_vector(std::vector<int> &vector)
{
	//make pair
	std::clock_t start = clock();
	std::vector<int>::iterator it = vector.begin();
	while (it != vector.end()) 
	{
		int element1 = *it;
		++it;
		if (it != vector.end())
		{
			int element2 = *it;
			vector_pair.push_back(std::make_pair(element1, element2));
			++it;
		} 
		else
			vector_pair.push_back(std::make_pair(element1, -1));
	}
	//swap
	std::vector<std::pair<int, int> >::iterator it2 =vector_pair.begin();
	for(; it2 != vector_pair.end(); it2++)
	{
		if (it2->first > it2->second)
			std::swap(it2->first, it2->second);
		else if (it2->second == 0)
			continue;
	}	
	std::sort(vector_pair.begin(), vector_pair.end());
	insert_sort_vector();	
	std::clock_t end = clock();
	return(static_cast<double>(end - start) / CLOCKS_PER_SEC);
}

std::vector<int> create_jacobvector(unsigned long size)
{
	std::vector <int> jacobNumbers;
	while (1)
	{
		unsigned long jacobNumber = Jacob_make(jacobNumbers.size());
		if (jacobNumber > size)
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
	std::vector <int> jacobvector;
	std::vector <int>::iterator itJacob = jacobNumbers.begin();
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
		jacobvector.push_back(index);
		while (jacobvector.back() - 1 != prev_index)
		{
			jacobvector.push_back(jacobvector.back() - 1);
		}	
		prev_index = index;
		itJacob++;
	}
	return (jacobvector);
}

void PmergeMe::insert_sort_vector(void)
{
	std::vector<std::pair<int, int> >::iterator it = vector_pair.begin();
	for(; it != vector_pair.end(); it++)
	{
		if (it->first == -1)
		{
			continue;
		}
		sorted_vector_data.push_back(it->first);
	}
	std::vector<int> jacobList = create_jacobvector(vector_pair.size());
	std::vector<int>::iterator itJacobList = jacobList.begin();
	while(itJacobList != jacobList.end())
	{
		unsigned int index = *itJacobList;
		if (index > vector_pair.size())
		{
			itJacobList++;
			continue ;
		}
		std::vector<std::pair<int, int> >::iterator it2 = vector_pair.begin();
		std::vector<int>::iterator itSorted = sorted_vector_data.begin();
		for(unsigned int i = 1; i < index; i++)
		{ 
			it2++;
			itSorted++;
		}
		while (itSorted != sorted_vector_data.end() && *itSorted < it2->second)
		{
			itSorted++;
		}
		if (itSorted == end(sorted_vector_data))
			sorted_vector_data.push_back(it2->second);
		else
			sorted_vector_data.insert(itSorted, it2->second);
		itJacobList++;
	}
}



void PmergeMe::sort(void)
{
	double time_list = 0;
	double time_vector = 0;
	
	print_before();	
	time_list = merge_insert_sort_list(list_data);
	time_vector = merge_insert_sort_vector(vector_data);
	print_after();
	std::cout << "Time to process a range of " << sorted_list_data.size() <<" elements with std::[list] : " << std::fixed << std::setprecision(6) << time_list << " sec"<<std::endl;
	std::cout << "Time to process a range of " << sorted_vector_data.size() <<" elements with std::[vector] : " << std::fixed << std::setprecision(6) << time_vector << " sec" << std::endl;
	//time check
}


