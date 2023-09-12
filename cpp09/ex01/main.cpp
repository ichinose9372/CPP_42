/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:51:15 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/12 17:56:23 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	(void)argv;

	if (argc != 2)
	{
		std::cout << "Error." << std::endl;
		return 0;
	}
	std::string literal = argv[1];
	RPN rpn(literal);

	return (0);
}