/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:19:16 by yichinos          #+#    #+#             */
/*   Updated: 2023/10/03 19:38:11 by yichinos         ###   ########.fr       */
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
	std::vector<unsigned int>::iterator it = vector_data.begin();
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
	std::vector<unsigned int>::iterator it = sorted_vector_data.begin();
	std::cout << "After:  ";
	while (it != sorted_vector_data.end())
	{
		std::cout << *it << " ";
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


double PmergeMe::merge_insert_sort_list(std::list<unsigned int> &list)
{
	//make pair
    std::list<unsigned int>::iterator it = list.begin();
    while (it != list.end()) 
	{
        unsigned int element1 = *it;
        ++it;
        if (it != list.end())
		{
            unsigned int element2 = *it;
            list_pair.push_back(std::make_pair(element1, element2));
            ++it;
        } 
		else
			sorted_list_data.push_back(element1);
    }
	
	std::clock_t start = clock();
	//swap
	std::list<std::pair<unsigned int, unsigned int> >::iterator it2 = list_pair.begin();
	for(; it2 != list_pair.end(); it2++)
	{
		if (it2->first > it2->second)
		{
			int tmp = it2->first;
			it2->first = it2->second;
			it2->second = tmp;
		}
		else if (it2->second == 0)
			continue;
	}
	
	// sort
	list_pair.sort();
	insert_sort_list(list_pair.rbegin());	
	std::clock_t end = clock();
	return(static_cast<double>(end - start) / CLOCKS_PER_SEC);
}


void PmergeMe::insert_sort_list(std::list<std::pair<unsigned int, unsigned int> >::reverse_iterator it)
{
	// std::cout << "insert_sort_list" << std::endl;
	if (it == list_pair.rend())
	{
		return ;
	}
	else
	{
		if (it->second > sorted_list_data.back())
		{
			sorted_list_data.push_back(it->second);
			sorted_list_data.push_front(it->first);
			it++;
			insert_sort_list(it);
		}
		else 
		{
			if (it->second > sorted_list_data.front())
			{
				std::list<unsigned int>::iterator it2 = sorted_list_data.begin();
			 	while (it2 != sorted_list_data.end())
            	{
	
                	if (it->second < *it2)
                	{
                    	sorted_list_data.insert(it2, it->second);
                    	break;
                	}
					it2++;
            	}
			}
			else 
			{
				sorted_list_data.push_front(it->second);
			}
			sorted_list_data.push_front(it->first);
			it++;
			insert_sort_list(it);	
		}
		
	}
}


double PmergeMe::merge_insert_sort_vector(std::vector<unsigned int> &vector)
{
	//make pair
    std::vector<unsigned int>::iterator it = vector.begin();
    while (it != vector.end()) 
	{
        unsigned int element1 = *it;
        ++it;
        if (it != vector.end())
		{
            unsigned int element2 = *it;
            vector_pair.push_back(std::make_pair(element1, element2));
            ++it;
        } 
		else
			sorted_vector_data.push_back(element1);
    }
	//swap
	std::clock_t start = clock();
	std::vector<std::pair<unsigned int, unsigned int> >::iterator it2 =vector_pair.begin();
	for(; it2 != vector_pair.end(); it2++)
	{
		if (it2->first > it2->second)
		{
			int tmp = it2->first;
			it2->first = it2->second;
			it2->second = tmp;
		}
		else if (it2->second == 0)
			continue;
	}	
	// sort　paire vector
	std::sort(vector_pair.begin(), vector_pair.end());
	insert_sort_vector(vector_pair.rbegin());	
	std::clock_t end = clock();
	return(static_cast<double>(end - start) / CLOCKS_PER_SEC);
}

void PmergeMe::insert_sort_vector(std::vector<std::pair<unsigned int, unsigned int> >::reverse_iterator it)
{
	if (it == vector_pair.rend())
	{
		return ;
	}
	else
	{
		if (sorted_vector_data.empty() || it->second > sorted_vector_data.back())
		{
			sorted_vector_data.push_back(it->second);
			sorted_vector_data.insert(sorted_vector_data.begin(), it->first);
			it++;
			insert_sort_vector(it);
		}
		else 
		{
			if (it->second > sorted_vector_data.front())
			{
				std::vector<unsigned int>::iterator it2 = sorted_vector_data.begin();
			 	while (it2 != sorted_vector_data.end())
            	{
	
                	if (it->second < *it2)
                	{
                    	sorted_vector_data.insert(it2, it->second);
                    	break;
                	}
					it2++;
            	}
			}
			else 
			{
				sorted_vector_data.insert(sorted_vector_data.begin(), it->second);
			}
			sorted_vector_data.insert(sorted_vector_data.begin(), it->first);	
			it++;
			insert_sort_vector(it);	
		}
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


