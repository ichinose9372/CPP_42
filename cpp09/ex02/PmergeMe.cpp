/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:19:16 by yichinos          #+#    #+#             */
/*   Updated: 2023/10/10 22:56:09 by ichinoseyuu      ###   ########.fr       */
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
		{
			list_pair.push_back(std::make_pair(element1, -1));
		}
	}
	std::clock_t start = clock();
	//swap
	std::list<std::pair<int, int> >::iterator it2 = list_pair.begin();
	for(; it2 != list_pair.end(); it2++)
	{
		if (it2->first > it2->second)
		{
			std::swap(it2->first, it2->second);
		}
		else if (it2->second == 0)
			continue;
	}
	
	list_pair.sort();
	insert_sort_list();	
	std::clock_t end = clock();
	return(static_cast<double>(end - start) / CLOCKS_PER_SEC);
}

int Jacobsthal(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	return Jacobsthal(n - 1) + 2 * Jacobsthal(n - 2);
}


void PmergeMe::insert_sort_list(void)
{
	size_t pair_list_size = list_pair.size();

	std::list<int> jacobList;

	while (jacobList.size() < pair_list_size) 
	{
        jacobList.push_back(Jacobsthal(jacobList.size()));
    }
	std::list<std::pair<int, int> >::iterator it = list_pair.begin();
	for(; it != list_pair.end(); it++)
	{
		sorted_list_data.push_back(it->first);
	}
	std::list<int>::iterator itJacob = jacobList.begin();
	std::list<std::pair<int, int> >::iterator itPair = list_pair.begin();
	while (itJacob != jacobList.end())
	{
		int index = *itJacob;
		// int prev_index = 0;	
		for(int i = 0; i < index; i++)
		{
			itPair++;
		}
		itJacob++;
	}
	
	//first is list_pair most bask input sorted list
	// std::cout << list_pair.back().first <<  "     "  << list_pair.back().second << std::endl;
	// sorted_list_data.push_back(list_pair.back().second);

// std::vector<int>::iterator itSorted;
// 		itSorted = std::lower_bound(sorted_vector_data.begin(), sorted_vector_data.end(), it->first);
// 		sorted_vector_data.insert(itSorted, it->first);
// 		itSorted = std::lower_bound(sorted_vector_data.begin(), sorted_vector_data.end(), it->second);
// 		sorted_vector_data.insert(itSorted, it->second);


	
	std::list<int>::iterator it2 = sorted_list_data.begin();
	for(; it2 != sorted_list_data.end(); it2++)
	{
		if (*it2 >= 0)
			std::cout << *it2 << std::endl;
	}
	
	
	//Insert sort by order of Jacob number.
}


double PmergeMe::merge_insert_sort_vector(std::vector<int> &vector)
{
	//make pair
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
		{
			vector_pair.push_back(std::make_pair(element1, -1));
		}	
	}
	//swap
	std::clock_t start = clock();
	std::vector<std::pair<int, int> >::iterator it2 =vector_pair.begin();
	for(; it2 != vector_pair.end(); it2++)
	{
		if (it2->first > it2->second)
		{
			std::swap(it2->first, it2->second);
		}
		else if (it2->second == 0)
			continue;
	}	
	// sort　paire vector
	std::sort(vector_pair.begin(), vector_pair.end());
	insert_sort_vector();	
	std::clock_t end = clock();
	return(static_cast<double>(end - start) / CLOCKS_PER_SEC);
}

void PmergeMe::insert_sort_vector(void)
{
	if (sorted_vector_data.empty())
	{
		sorted_vector_data.push_back(vector_pair.front().second);
		sorted_vector_data.insert(sorted_vector_data.begin(),vector_pair.front().first);
		vector_pair.erase(vector_pair.begin());	
	}
	for(std::vector<std::pair<int, int> >::iterator it = vector_pair.begin(); it != vector_pair.end(); ++it)
	{
		std::vector<int>::iterator itSorted;
		itSorted = std::lower_bound(sorted_vector_data.begin(), sorted_vector_data.end(), it->first);
		sorted_vector_data.insert(itSorted, it->first);
		itSorted = std::lower_bound(sorted_vector_data.begin(), sorted_vector_data.end(), it->second);
		sorted_vector_data.insert(itSorted, it->second);
	}
}



void PmergeMe::sort(void)
{
	// double time_list = 0;
	// double time_vector = 0;
	
	// print_before();	
	// // time_list = merge_insert_sort_list(list_data);
	merge_insert_sort_list(list_data);
	// // time_vector = merge_insert_sort_vector(vector_data);
	// print_after();
	// std::cout << "Time to process a range of " << sorted_list_data.size() <<" elements with std::[list] : " << std::fixed << std::setprecision(6) << time_list << " sec"<<std::endl;
	// std::cout << "Time to process a range of " << sorted_vector_data.size() <<" elements with std::[vector] : " << std::fixed << std::setprecision(6) << time_vector << " sec" << std::endl;
	// //time check
}


