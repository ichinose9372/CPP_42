/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:10:17 by yichinos          #+#    #+#             */
/*   Updated: 2023/10/09 14:58:35 by ichinoseyuu      ###   ########.fr       */
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
		void list_make_pair(void);
		
		template <typename T> 
		void list_make_pairtopair(std::list<std::pair<T, T> > &pairlist)
		{
			if (pairlist.size() < 2)
				return ;
			else
			{
				std::list<std::pair<std::pair<T, T> ,std::pair<T, T> > > tmplist;
				typename std::list<std::pair<T, T> >::iterator it = pairlist.begin();
				while (it != pairlist.end()) 
				{
					std::pair<T, T> tmp_pair1 = *it;
					++it;
					if (it != pairlist.end()) 
					{
						std::pair<T, T> tmp_pair2 = *it;
						++it;
						tmplist.push_back(std::make_pair(tmp_pair1, tmp_pair2));
					}
					else
					{
						break ;
					}
				}
				std::cout << tmplist.size() << std::endl;
				// list_make_pairtopair(tmplist);
			}	
		}
		
		double merge_insert_sort_vector(std::vector<int> &vector);
		void insert_sort_list(void);	
		void insert_sort_vector(void);	
		void print_before(void);
		void print_after(void);
};
#endif