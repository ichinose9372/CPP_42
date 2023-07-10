/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:41:54 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/10 12:15:35 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Herl.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Usage: ./herl [debug|info|warning|error]" << std::endl;
		return (0);
	}
	Herl herl;
	herl.complain(argv[1]);
	herl.complain("ERROR");
	herl.complain("WARNING");
	herl.complain("INFO");
	herl.complain("DEBUG");
	std::cout << "----------------------------" << std::endl;
	herl.complain("ERRORRRRRRRR");
	herl.complain("");
	herl.complain("\n");
	return (0);
}
