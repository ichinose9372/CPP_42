/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <$yichinos@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:39:43 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/06/12 13:09:39 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::setName(std::string name)
{
	_name = name;
}

std::string  HumanA::getName(void)
{
	return _name;
}

void	HumanA::setWeapon(Weapon &tmp)
{
	_A = tmp;
}

void HumanA::attack()
{
	std::cout << getName() << "  attacks with their " << _A.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &tmp) : _A(tmp)
{
	std::cout << "HumanA constructor called" << std::endl;
	setName(name);
}

HumanA::~HumanA()
{
	std::cout << "HumanA destructor called" << std::endl;
}
