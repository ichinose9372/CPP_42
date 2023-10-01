/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:32:56 by yichinos          #+#    #+#             */
/*   Updated: 2023/10/01 15:54:25 by ichinoseyuu      ###   ########.fr       */
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
	try
	{
		PmergeMe pmerge(argv);
		pmerge.sort();
	}
	catch (const std::exception &e)
	{
		std::cout << RED << e.what() << NORMAL << std::endl;
		return (1);
	}
	return (0);
}