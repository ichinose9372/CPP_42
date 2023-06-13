/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <$yichinos@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:29:07 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/06/12 13:11:35 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string  Weapon::getType(void) const
{
	return _type;
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

Weapon::Weapon(std::string str)
{
	setType(str);
}

Weapon::Weapon()
{
	setType("");
}

Weapon::~Weapon()
{
	std::cout << "Weapon destructor called" << std::endl;
}
