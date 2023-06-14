/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Herl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <$yichinos@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:53:21 by yichinos          #+#    #+#             */
/*   Updated: 2023/06/14 11:22:57 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Herl.hpp"

void Herl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Herl::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Herl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." << std::endl;
}

void Herl::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Herl::complain(std::string level)
{
	std::string name[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int num = 0;;

	for(int i = 0; i < 4; i++)
	{
		if (level == name[i])
		{
			num = i;
			break;
		}
		else if (i == 3)
		{
			std::cout << "Invalid level" << std::endl;
			return ;
		}
	}
	switch (num)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
	}
}
