/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:07:32 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/11 11:08:03 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "defalut constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "\033[95m ScavTrap constructor called \033[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &old_obj) : ClapTrap(old_obj)
{
	std::cout << "\033[32m ScavTrap copy constructor called \033[0m" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[34m ScavTrap destructor called \033[0m" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " has enterred in Gate keeper mode" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &old_obj)
{
	if (this != &old_obj)
	{
		this->name = old_obj.name;
		this->hit_points = old_obj.hit_points;
		this->energy_points = old_obj.energy_points;
		this->attack_damage = old_obj.attack_damage;
		std::cout << "ScavTrap assignation operator (" << this->name  << ") called" << std::endl;
	}
	return (*this);
}

void	ScavTrap::attack(std::string const & target)
{
	
	if (this->energy_points == 0 || this->hit_points == 0)
	{
		std::cout << "ScavTrap " << this->name << " is not able to attack" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_points -= 1;
}
