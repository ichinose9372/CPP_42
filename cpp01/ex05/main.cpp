/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:41:54 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/16 18:41:31 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Usage: ./herl [debug|info|warning|error]" << std::endl;
		return (0);
	}
	Harl harl;
	harl.complain(argv[1]);
	harl.complain("ERROR");
	harl.complain("WARNING");
	harl.complain("INFO");
	harl.complain("DEBUG");
	std::cout << "----------------------------" << std::endl;
	harl.complain("ERRORRRRRRRR");
	harl.complain("");
	harl.complain("\n");
	return (0);
}
