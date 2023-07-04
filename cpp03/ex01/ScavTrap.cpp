/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:07:32 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/04 17:28:38 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "\033[95mPinkScavTrap Default constructor called \033[0m" << std::endl;
	setHitPoints(100);
	setEnergyPoints(100);	
	setAttackDamage(30);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "\033[95mPink ScavTrap constructor called \033[0m" << std::endl;
	setName(name);
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

ScavTrap::ScavTrap(const ScavTrap &old_obj) : ClapTrap(old_obj)
{
	std::cout << "\033[32mGreen ScavTrap copy constructor called \033[0m" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[34mBlue ScavTrap destructor called \033[0m" << std::endl;
}