/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:32:56 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/24 12:32:37 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if  (argc <= 2)
	{
		std::cout << RED << "Error: " << NORMAL << std::endl;
		return (1);
	}
	PmergeMe pmerge(argv);
	// print data
	// std::cout << "Before:  ";
	// pmerge.print_data();
	std::cout << '\n';
	// merge insert sort 
	pmerge.sort();
	// pmerge.merge_insert_sort_list(pmerge.list_data);
	// std::cout << "After:  ";
	// pmerge.print_data();
	std::cout << '\n';
	
	
	// std::cout << GREEN << "OK !!" << std::endl;
	return (0);
}