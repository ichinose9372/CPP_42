/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:27:01 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/04 13:33:46 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "original";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	std::cout << "ClapTrap default constructor < " << this->name << " >called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor <"<< name << "> called" << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &old_obj)
{
	this->name = old_obj.name;
	this->hit_points = old_obj.hit_points;
	this->energy_points = old_obj.energy_points;
	this->attack_damage = old_obj.attack_damage;		
	std::cout << "ClapTrap copy constructor <" << this->name << "> called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &old_obj)
{
	if (this != &old_obj)
	{
		this->name = old_obj.name;
		this->hit_points = old_obj.hit_points;
		this->energy_points = old_obj.energy_points;
		this->attack_damage = old_obj.attack_damage;
		std::cout << "ClapTrap assignation operator (" << this->name  << ") called" << std::endl;
	}
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
	if (this->hit_points < 1)
		std::cout << "NO MORE HIT POINT POINT" << std::endl;
	if (this->energy_points < 1)
		std::cout << "NO MORE ENERGEY POINT" << std::endl;
	else
		this->energy_points -= 1;
		std::cout << "ClapTrap <" << this->name << "> attacks <" << target <<"> causing < " << this->attack_damage <<" > points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_points -= amount;
	std::cout << "ClapTrap <" << this->name << "> take damage <" << amount <<"> points of damage!" << std::endl;
	if (this->hit_points <= 0)
		std::cout << "ClapTrap <" << this->name << "> is dead" << std::endl;
	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hit_points += amount;
	std::cout << "ClapTrap <" << this->name << "> be repaired <" << amount <<"> points of damage!" << std::endl;
}