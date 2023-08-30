/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:41:41 by yichinos          #+#    #+#             */
/*   Updated: 2023/08/30 12:09:21 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>


int main(void)
{
	int int_arry[5] = {100, 200, 400, 500, 10000};
	std::string str_arry[5] = {"42", "Tokyo", "is", "in", "Roppongi"};

	std::cout << "-------int_arry-------" << std::endl;
	iter(int_arry, 5, printarry<int>);
	std::cout << "-------str_arry--------" << std::endl;
	iter(str_arry, 5, printarry<std::string>);
	return (0);
}