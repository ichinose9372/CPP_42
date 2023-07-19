/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:07:32 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/19 12:19:21 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "  ScavTrap defalut constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "  ScavTrap constructor called " << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &old_obj) : ClapTrap(old_obj)
{
	*this = old_obj;
	std::cout << "  ScavTrap copy constructor called " << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "  ScavTrap destructor called " << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "  ScavTrap " << this->name << " has enterred in Gate keeper mode" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &old_obj)
{
	std::cout << "  ScavTrap assignation operator called" << std::endl;
	if (this != &old_obj)
	{
		this->name = old_obj.name;
		this->hit_points = old_obj.hit_points;
		this->energy_points = old_obj.energy_points;
		this->attack_damage = old_obj.attack_damage;
	}
	return (*this);
}

void	ScavTrap::attack(std::string const & target)
{
		if (this->energy_points < 1)
	{
		std::cout << "  NO MORE ENERGEY POINT" << std::endl;
		return ;
	}
	this->energy_points -= 1;
	std::cout << "  ScavTrap <" << this->name << "> attacks <" << target <<"> causing < " << this->attack_damage <<" > points of damage!" << std::endl;
}
