/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:19:16 by yichinos          #+#    #+#             */
/*   Updated: 2023/10/09 13:07:23 by yichinos         ###   ########.fr       */
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


void PmergeMe::list_make_pair(void)
{
	std::list<int>::iterator it = list_data.begin();
	while (it != list_data.end()) 
	{
		int element1 = *it;
		++it;
		if (it != list_data.end())
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
	std::cout << "ended @@@ \n";
}
// double PmergeMe::merge_insert_sort_list(std::list<int> &list)
// {
// 	//make pair
// 	std::list<int>::iterator it = list.begin();
// 	while (it != list.end()) 
// 	{
// 		int element1 = *it;
// 		++it;
// 		if (it != list.end())
// 		{
// 			int element2 = *it;
// 			list_pair.push_back(std::make_pair(element1, element2));
// 			++it;
// 		} 
// 		else
// 		{
// 			list_pair.push_back(std::make_pair(element1, -1));
// 		}
// 	}
// 	std::clock_t start = clock();
// 	//swap
// 	std::list<std::pair<int, int> >::iterator it2 = list_pair.begin();
// 	for(; it2 != list_pair.end(); it2++)
// 	{
// 		if (it2->first > it2->second)
// 		{
// 			std::swap(it2->first, it2->second);
// 		}
// 		else if (it2->second == 0)
// 			continue;
// 	}
	
	// sort
	// list_pair.sort();
	// insert_sort_list();	
	// std::clock_t end = clock();
	// return(static_cast<double>(end - start) / CLOCKS_PER_SEC);
// }


void PmergeMe::insert_sort_list(void)
{
	if (sorted_list_data.empty())
	{
		sorted_list_data.push_front(list_pair.front().second);
		sorted_list_data.push_front(list_pair.front().first);

		list_pair.pop_front();	
	}
	for(std::list<std::pair<int, int> >::iterator it = list_pair.begin(); it != list_pair.end(); ++it)
	{
		std::list<int>::iterator itSorted;
		itSorted = std::lower_bound(sorted_list_data.begin(), sorted_list_data.end(), it->first);
		sorted_list_data.insert(itSorted++, it->first);
		itSorted = std::lower_bound(sorted_list_data.begin(), sorted_list_data.end(), it->second);
		sorted_list_data.insert(itSorted++, it->second);
	}
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
	// // merge_insert_sort_list(list_data);
	// // time_vector = merge_insert_sort_vector(vector_data);
	// print_after();
	// std::cout << "Time to process a range of " << sorted_list_data.size() <<" elements with std::[list] : " << std::fixed << std::setprecision(6) << time_list << " sec"<<std::endl;
	// std::cout << "Time to process a range of " << sorted_vector_data.size() <<" elements with std::[vector] : " << std::fixed << std::setprecision(6) << time_vector << " sec" << std::endl;
	// //time check
	list_make_pair();
	list_make_pairtopair(this->list_pair);
}


