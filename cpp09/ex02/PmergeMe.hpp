/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:10:17 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/24 12:31:54 by ichinoseyuu      ###   ########.fr       */
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

class PmergeMe
{
	private:
		std::list<unsigned int> list_data;
		std::vector<unsigned int> vector_data;
		std::list<unsigned int> sorted_list_data;
		std::vector<unsigned int> sorted_vector_data;
		std::list<std::pair<unsigned int, unsigned int> > list_pair;
		std::vector<std::pair<unsigned int, unsigned int> > vector_pair;
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();
		PmergeMe(char **argv);
		void print_data(void);
		void sort(void);
		void merge_insert_sort_list(std::list<unsigned int> &list);
};
#endif