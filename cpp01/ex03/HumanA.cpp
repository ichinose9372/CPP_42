/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:39:43 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/05/19 21:31:24 by ichinoseyuu      ###   ########.fr       */
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

HumanA::HumanA(std::string name, Weapon &tmp) : _A (tmp)
{
	setName(name);
}

