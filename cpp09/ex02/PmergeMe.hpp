/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:10:17 by yichinos          #+#    #+#             */
/*   Updated: 2023/10/18 21:39:30 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#define RED "\x1b[31m"
#define NORMAL "\033[0m"
#define GREEN "\x1b[32m" 
#define YELLOW "\x1b[33m"

#include <stdexcept>
#include <string>
#include <sstream>
#include <iostream>
#include <list>
#include <vector>
#include <exception>
#include <algorithm>
#include <ctime>
#include <iomanip>
#include "Jacobsthal.hpp"


typedef struct s_Pair
{
	int first;
	int second;
} t_Pair;


class PmergeMe
{
	private:
		std::list<int> init_list_data;
		std::vector<int> init_vector_data;
		std::list<int> sorted_list_data;
		std::vector<int> sorted_vector_data;

		PmergeMe();
	public:
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();
		PmergeMe(char **argv);
		void sort(void);
		std::list<int> merge_insert_sort_list(std::list<t_Pair> list_pair);
		std::list<t_Pair> list_to_pair(std::list<int> list);
		std::vector<int>merge_insert_sort_vector(std::vector<t_Pair> vector_pair);
		std::vector<t_Pair> vector_to_pair(std::vector<int> vector);
		void print_before(void);
		void print_after(void);
		
};
#endif