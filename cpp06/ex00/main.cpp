
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:20:09 by yichinos          #+#    #+#             */
/*   Updated: 2023/08/24 16:23:38 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	
	ScalarConverter::convert(argv[1]);
	
	return (0);
}