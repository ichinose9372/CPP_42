/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:29:07 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/05/19 16:15:31 by ichinoseyuu      ###   ########.fr       */
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

