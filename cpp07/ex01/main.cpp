/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:41:41 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/16 18:08:36 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>


int main(void)
{

	{
		std::cout << YELLOW << "-------int_arry-------" << NORMAL << std::endl;
		int int_arry[5] = {0, 2147483647, -1, 1000000000, -2147483648};
		iter(int_arry, 5, printarry<int>);	
		std::cout << YELLOW << "-------str_arry--------" << NORMAL << std::endl;
		std::string str_arry[5] = {"42", "Tokyo", "is", "in", "Roppongi"};
		iter(str_arry, 5, printarry<std::string>);
		
		std::cout << YELLOW << "-------float_arry--------" << NORMAL << std::endl;
		float float_arry[5] = { 0.1, 0.01, 0.001, 0.0001, 1.11111};
		iter(float_arry, 5, printarry<float>);
	
		std::cout << YELLOW << "-------double_arry--------" << NORMAL << std::endl;
		double double_arry[5] = { -1.1, -1.11, -1.111, -1.1111, -1.11111};
		iter(double_arry, 5, printarry<double>);
	}
	{
		std::cout << YELLOW << "-------int_arry-------" << NORMAL << std::endl;
		const int int_arry[5] = {0, 2147483647, -1, 1000000000, -2147483648};
		iter(int_arry, 5, printarry<int>);
		
		std::cout << YELLOW << "-------str_arry--------" << NORMAL << std::endl;
		const std::string str_arry[5] = {"42", "Tokyo", "is", "in", "Roppongi"};
		iter(str_arry, 5, printarry<std::string>);
		
		std::cout << YELLOW << "-------float_arry--------" << NORMAL << std::endl;
		const float float_arry[5] = { 0.1, 0.01, 0.001, 0.0001, 1.11111};
		iter(float_arry, 5, printarry<float>);
	
	
		std::cout << YELLOW << "-------double_arry--------" << NORMAL << std::endl;
		const double double_arry[5] = { -1.1, -1.11, -1.111, -1.1111, -1.11111};
		iter(double_arry, 5, printarry<double>);
	}


	return (0);
}