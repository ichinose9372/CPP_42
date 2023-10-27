/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:19:16 by yichinos          #+#    #+#             */
/*   Updated: 2023/10/19 10:29:03 by ichinoseyuu      ###   ########.fr       */
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
            // check_list_data.push_back(num);
		}
		else
		{
			throw std::invalid_argument("Error");
		}
	}
    // check_list_data.sort();
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

void jacob_insert_list(std::list<t_Pair> list_pair, std::list<int>& sorted_list, unsigned int pos)
{
    std::list<t_Pair>::iterator it_pair = list_pair.begin();
    for(unsigned int i = 1; i < pos; i++)
    {
        it_pair++;
    }
    if (it_pair->second == -1)
        return;
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

std::list<int> inseration_func_list(std::list<t_Pair> list_pair ,std::list<int> sorted_list, bool *flag)
{
    if (*flag == true)
    {
        int num = list_pair.back().first;
        insert_num_list(num, sorted_list);
    }
    std::list<int> jacoblist = create_jacoblist(list_pair.size());
    std::list<int>::iterator it_jacob = jacoblist.begin();
    while(it_jacob != jacoblist.end())
    {
        unsigned int pos = *it_jacob;
        if (pos > list_pair.size())
        {
            it_jacob++;
            continue;
        }
        jacob_insert_list(list_pair, sorted_list, pos);
        it_jacob++;
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


void jacob_insert_vector(std::vector<t_Pair> vector_pair, std::vector<int>& sorted_vector, unsigned int pos)
{
    std::vector<t_Pair>::iterator it_pair = vector_pair.begin();
    for(unsigned int i = 1; i < pos; i++)
    {
        it_pair++;
    }
    if (it_pair->second == -1)
        return;
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


std::vector<int> inseration_func_vector(std::vector<t_Pair> vector_pair ,std::vector<int> sorted_vector, bool *flag)
{
    if (*flag == true)
    {
        int num = vector_pair.back().first;
        insert_num_vector(num, sorted_vector);
    }
    std::list<int> jacoblist = create_jacoblist(vector_pair.size());
    std::list<int>::iterator it_jacob = jacoblist.begin();
    while(it_jacob != jacoblist.end())
    {
        unsigned int pos = *it_jacob;
        if (pos > vector_pair.size())
        {
            it_jacob++;
            continue;
        }
        jacob_insert_vector(vector_pair, sorted_vector, pos);
        it_jacob++;
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


// void PmergeMe::check(void)
// {
//     std::cout << "Check:  ";
//     std::list<int>::iterator it = check_list_data.begin();
//     std::list<int>::iterator it2 = sorted_list_data.begin();
//     std::vector<int>::iterator it3 = sorted_vector_data.begin();
//     while (it != check_list_data.end())
//     {
//         if (*it != *it2)
//         {
//             std::cout << RED << "KO" << NORMAL << std::endl;
//             return;
//         }
//         else if (*it != *it3)
//         {
//             std::cout << YELLOW << "KO" << NORMAL << std::endl;
//             return;
//         }
//         it++;
//         it2++;
//         it3++;
//     }
//     std::cout << GREEN << "OK" << NORMAL << std::endl;
// }


void PmergeMe::sort(void)
{
    double time_list;
    double time_vector;
	print_before();
    clock_t start_list = clock();
	sorted_list_data = merge_insert_sort_list(list_to_pair(init_list_data));
    clock_t end_list = clock();
    time_list = static_cast<double>(end_list - start_list) / CLOCKS_PER_SEC;
    clock_t start_vector = clock();
    sorted_vector_data = merge_insert_sort_vector(vector_to_pair(init_vector_data));
    clock_t end_vector = clock();
    time_vector = static_cast<double>(end_vector - start_vector) / CLOCKS_PER_SEC;
	sorted_vector_data = merge_insert_sort_vector(vector_to_pair(init_vector_data));
	print_after();
    // check();
	std::cout << "Time to process a range of " << sorted_list_data.size() <<" elements with std::[list] : " << std::fixed << std::setprecision(6) << time_list << " sec"<<std::endl;
	std::cout << "Time to process a range of " << sorted_vector_data.size() <<" elements with std::[vector] : " << std::fixed << std::setprecision(6) << time_vector << " sec" << std::endl;
}


