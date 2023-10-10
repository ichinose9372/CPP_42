/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:10:17 by yichinos          #+#    #+#             */
/*   Updated: 2023/10/09 19:44:55 by ichinoseyuu      ###   ########.fr       */
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


class PmergeMe
{
	private:
		std::list<int> list_data;
		std::vector<int> vector_data;
		std::list<int> sorted_list_data;
		std::vector<int> sorted_vector_data;
		std::list<std::pair<int, int> > list_pair;
		std::vector<std::pair<int, int> > vector_pair;
		PmergeMe();
	public:
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();
		PmergeMe(char **argv);
		void sort(void);
		double merge_insert_sort_list(std::list<int> &list);
		double merge_insert_sort_vector(std::vector<int> &vector);
		void insert_sort_list(void);	
		void insert_sort_vector(void);	
		void print_before(void);
		void print_after(void);
};
#endif