/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:27:01 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/03 15:45:43 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor (name) called" << std::endl;
	this->name = name;
}

ClapTrap::ClapTrap(const ClapTrap &old_obj)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
		
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &old_obj)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	this->name = old_obj.name;
	this->hit_points = old_obj.hit_points;
	this->energy_points = old_obj.energy_points;
	this->attack_damage = old_obj.attack_damage;
	return (*this);
}