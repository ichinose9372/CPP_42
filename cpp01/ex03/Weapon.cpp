/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:29:07 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/07/10 11:35:20 by yichinos         ###   ########.fr       */
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

Weapon::Weapon(std::string str) : _type(str)
{
	std::cout << "Weapon constructor called (string)" << std::endl;
	return ;
}

Weapon::Weapon() : _type("default")
{
	std::cout << "Weapon constructor called (default)" << std::endl;
	return ;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destructor called" << std::endl;
}
