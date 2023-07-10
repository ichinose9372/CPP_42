/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Herl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:41:44 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/10 12:11:14 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Herl.hpp"

void	Herl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Herl::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Herl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." << std::endl;
}

void	Herl::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}


void	Herl::complain(std::string level)
{
	std::string name[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void(Herl::*funcptr[])(void) = {&Herl::debug, &Herl::info, &Herl::warning, &Herl::error};
	for (int i = 0; i < 4; i++)
	{
		if (level == name[i])
		{
			(this->*funcptr[i])();
			return ;
		}
	}
	std::cout << "Error: invalid level" << std::endl;
}
Herl::Herl()
{
	std::cout<<"Herl is created"<<std::endl;
}

Herl::~Herl()
{
	std::cout<<"Herl is destroyed"<<std::endl;
}
