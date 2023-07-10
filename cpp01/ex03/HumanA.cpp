/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:39:43 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/07/10 11:42:07 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::setName(std::string name)
{
	this->name = name;
}

std::string  HumanA::getName(void)
{
	return this->name;
}

void	HumanA::setWeapon(Weapon &tmp)
{
	this->A_Weapon = tmp;
}

void HumanA::attack()
{
	std::cout << getName() << "  attacks with their " << A_Weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &tmp) : A_Weapon(tmp)
{
	std::cout << "HumanA constructor called" << std::endl;
	setName(name);
}

HumanA::~HumanA()
{
	std::cout << "HumanA destructor called" << std::endl;
}
