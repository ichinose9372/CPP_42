/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <$yichinos@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:30:12 by yichinos          #+#    #+#             */
/*   Updated: 2023/06/12 13:34:56 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &tmp)
{
	_b = &tmp;
}

void	HumanB::setName(std::string name)
{
	_name = name;
}

std::string HumanB::getName(void)
{
	return _name;
}

void	HumanB::attack()
{
	std::cout << getName() << "  attacks with their " << _b->getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
	setName(name);
}

HumanB::~HumanB()
{
	std::cout << "HumanB destructor called" << std::endl;
}
