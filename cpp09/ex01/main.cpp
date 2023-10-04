/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:51:15 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/10/04 13:20:39 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

void test_func(std::string test_string)
{
	std::cout << YELLOW << "\nTest case  ( " << test_string << " )" << NORMAL << std::endl;
	try
	{
		std::cout << "A.   " << GREEN;
		RPN test_RPN(test_string);
		std::cout << "\n";
	}
	catch (const std::exception &e)
	{
		std::cerr << RED << e.what() << NORMAL << std::endl;
	}
	
}

// int main(int argc, char **argv)
// {
// 	(void)argv;

// 	if (argc != 2)
// 	{
// 		std::cout << "Error." << std::endl;
// 		return 0;
// 	}
// 	std::string literal = argv[1];
// 	try
// 	{
// 		RPN rpn(literal);
// 	}
// 	catch (const std::invalid_argument &e)
// 	{
// 		std::cerr << e.what();
// 	}
// 	return (0);
// }

int main(void)
{
	test_func("8 9 * 9 - 9 - 9 - 4 - 1 +");
	test_func("7 7 * 7 -");
	test_func("0.1 1 9 - +");
	test_func("10 8 -");
	test_func("1 1 1 1 1 - - 1 1 1* * / + / -");
	test_func("2 0 /");
}