/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:30:12 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/10 11:47:12 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &tmp)
{
	B_Weapon = &tmp;
}

void	HumanB::setName(std::string name)
{
	this->name = name;
}

std::string HumanB::getName(void)
{
	return this->name;
}

void	HumanB::attack()
{
	if (B_Weapon == NULL)
	{
		std::cout << getName() << "  attacks but no Weapon " << std::endl;
		return ;
	}
	std::cout << getName() << "  attacks with their " << B_Weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
	std::cout << "HumanB constructor called" << std::endl;
	setName(name);
	B_Weapon = NULL;
}

HumanB::~HumanB()
{
	std::cout << "HumanB destructor called" << std::endl;
}
