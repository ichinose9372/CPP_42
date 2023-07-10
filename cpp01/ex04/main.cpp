/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:08:58 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/10 12:00:51 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	if (s1 == "\0" || s1 == " ")
	{
		std::cout << "Error: empty string" << std::endl;
		return 1;
	}
	std::string s2 = argv[3];
	if (s2 == "\0" || s2 == " ")
	{
		std::cout << "Error: empty string" << std::endl;
		return 1;
	}

	File file(filename);
	file.replace(s1, s2);
	return 0;
}
