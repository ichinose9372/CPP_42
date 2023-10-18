/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:19:16 by yichinos          #+#    #+#             */
/*   Updated: 2023/10/18 21:49:50 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(char **argv)
{
	for (int i = 1; argv[i]; i++)
	{
		int num;
		std::istringstream str(argv[i]);
		if (str >> num && num >= 0)
		{
			init_list_data.push_back(num);
			init_vector_data.push_back(num);
		}
		else
		{
			throw std::invalid_argument("Error");
		}
	}
}

PmergeMe::~PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	*this = other;	
}

PmergeMe& PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other)
	{
		init_list_data = other.init_list_data;
		init_vector_data = other.init_vector_data;
	}
	return (*this);
}

void PmergeMe::print_before(void)
{
	std::list<int>::iterator it = init_list_data.begin();
	std::cout << "Beforr: ";
	while (it != init_list_data.end())
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

std::list<t_Pair> PmergeMe::list_to_pair(std::list<int> list)
{
	std::list<t_Pair> list_pair;
	std::list<int>::iterator it = list.begin();
    for(; it!= list.end(); it++)
    {
        t_Pair tmp;
        tmp.first = *it;
        it++;
        if (it == list.end())
        {
            tmp.second = -1;
            list_pair.push_back(tmp);
            break;
        }
        tmp.second = *it;
        list_pair.push_back(tmp);
    }
    return list_pair;
}

std::vector<t_Pair> PmergeMe::vector_to_pair(std::vector<int> vector)
{
	std::vector<t_Pair> vector_pair;
	std::vector<int>::iterator it = vector.begin();
    for(; it!= vector.end(); it++)
    {
        t_Pair tmp;
        tmp.first = *it;
        it++;
        if (it == vector.end())
        {
            tmp.second = -1;
            vector_pair.push_back(tmp);
            break;
        }
        tmp.second = *it;
        vector_pair.push_back(tmp);
    }
    return vector_pair;
}

void insert_num_list(int num , std::list<int>& sorted_list)
{
    std::list<int>::iterator it = sorted_list.begin();
    for(; it != sorted_list.end(); it++)
    {
        if (num <= *it)
        {
            sorted_list.insert(it, num);
            return;
        }
    }
    sorted_list.push_back(num);
}

std::list<int> last_1_make_list(std::list<t_Pair> list_pair)
{
    std::list<int> sorted_list;
    if (list_pair.front().first <= list_pair.front().second)
    {
        sorted_list.push_back(list_pair.front().first);
        sorted_list.push_back(list_pair.front().second);
        return sorted_list;
    }
    else
    {
        sorted_list.push_back(list_pair.front().first);
        sorted_list.push_front(list_pair.front().second);
        return sorted_list;
    }
}

std::list<t_Pair>  make_pair_func_list(std::list<t_Pair> &list_pair, bool *flag)
{
    std::list<t_Pair> return_list;
    std::list<t_Pair>::iterator it = list_pair.begin();
    for(; it != list_pair.end(); it++)
    {
        t_Pair tmp;
        tmp.first = it->first;
        it++;
        if(it == list_pair.end())
        {
            *flag = true;
            break;
        }
        tmp.second = it->first;

        return_list.push_back(tmp);
    }
    return (return_list);
}

std::list<int> inseration_func_list(std::list<t_Pair> list_pair ,std::list<int> sorted_list, bool *flag)
{
    std::list<t_Pair>::iterator it_pair = list_pair.begin();
    if (*flag == true)
    {
        int num = list_pair.back().first;
        insert_num_list(num, sorted_list);
    }
    for(; it_pair != list_pair.end(); ++it_pair)
    {
        if (it_pair->second == -1)
            continue;
        std::list<int>::iterator it_sorted = sorted_list.begin();
        while (it_sorted != sorted_list.end() && *it_sorted < it_pair->second)
        {
            it_sorted++;
        }        
        if (it_sorted == sorted_list.end())
            sorted_list.push_back(it_pair->second);
        else
            sorted_list.insert(it_sorted, it_pair->second);
    }
    return (sorted_list);
}

std::list<int> PmergeMe::merge_insert_sort_list(std::list<t_Pair>  list_pair)
{
    bool flag = false;
    std::list<int> sorted_list;
    if (list_pair.size() == 1)
       return last_1_make_list(list_pair);
    else
    {
        std::list<t_Pair> re_list = make_pair_func_list(list_pair, &flag);
        sorted_list = merge_insert_sort_list(re_list);
        if (flag == true)
            return (inseration_func_list(list_pair, sorted_list, &flag));
        return (inseration_func_list(list_pair, sorted_list, &flag));
    }
}


void insert_num_vector(int num , std::vector<int>& sorted_vector)
{
    std::vector<int>::iterator it = sorted_vector.begin();
    for(; it != sorted_vector.end(); it++)
    {
        if (num <= *it)
        {
            sorted_vector.insert(it, num);
            return;
        }
    }
    sorted_vector.push_back(num);
}

std::vector<int> last_1_make_vector_vector(std::vector<t_Pair> vector_pair)
{
    std::vector<int> sorted_vector;
    if (vector_pair.front().first <= vector_pair.front().second)
    {
        sorted_vector.push_back(vector_pair.front().first);
        sorted_vector.push_back(vector_pair.front().second);
        return sorted_vector;
    }
    else
    {
        sorted_vector.push_back(vector_pair.front().second);
        sorted_vector.push_back(vector_pair.front().first);
        return sorted_vector;
    }
}

std::vector<t_Pair>  make_pair_func_vector(std::vector<t_Pair> &vector_pair, bool *flag)
{
    std::vector<t_Pair> return_vector;
    std::vector<t_Pair>::iterator it = vector_pair.begin();
    for(; it != vector_pair.end(); it++)
    {
        t_Pair tmp;
        tmp.first = it->first;
        it++;
        if(it == vector_pair.end())
        {
            *flag = true;
            break;
        }
        tmp.second = it->first;

        return_vector.push_back(tmp);
    }
    return (return_vector);
}

std::vector<int> inseration_func_vector(std::vector<t_Pair> vector_pair ,std::vector<int> sorted_vector, bool *flag)
{
    std::vector<t_Pair>::iterator it_pair = vector_pair.begin();
    if (*flag == true)
    {
        int num = vector_pair.back().first;
        insert_num_vector(num, sorted_vector);
    }
    for(; it_pair != vector_pair.end(); ++it_pair)
    {
        if (it_pair->second == -1)
            continue;
        std::vector<int>::iterator it_sorted = sorted_vector.begin();
        while (it_sorted != sorted_vector.end() && *it_sorted < it_pair->second)
        {
            it_sorted++;
        }        
        if (it_sorted == sorted_vector.end())
            sorted_vector.push_back(it_pair->second);
        else
            sorted_vector.insert(it_sorted, it_pair->second);
    }
    return (sorted_vector);
}

std::vector<int> PmergeMe::merge_insert_sort_vector(std::vector<t_Pair>  vector_pair)
{
    bool flag = false;
    std::vector<int> sorted_vector;
    if (vector_pair.size() == 1)
       return last_1_make_vector_vector(vector_pair);
    else
    {
        std::vector<t_Pair> re_vector = make_pair_func_vector(vector_pair, &flag);
        sorted_vector = merge_insert_sort_vector(re_vector);
        if (flag == true)
            return (inseration_func_vector(vector_pair, sorted_vector, &flag));
        return (inseration_func_vector(vector_pair, sorted_vector, &flag));
    }
}


void PmergeMe::sort(void)
{
	print_before();
	sorted_list_data = merge_insert_sort_list(list_to_pair(init_list_data));
	sorted_vector_data = merge_insert_sort_vector(vector_to_pair(init_vector_data));
	print_after();
	// std::cout << "Time to process a range of " << sorted_list_data.size() <<" elements with std::[list] : " << std::fixed << std::setprecision(6) << time_list << " sec"<<std::endl;
	// std::cout << "Time to process a range of " << sorted_vector_data.size() <<" elements with std::[vector] : " << std::fixed << std::setprecision(6) << time_vector << " sec" << std::endl;
}


