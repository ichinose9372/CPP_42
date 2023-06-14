/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <$yichinos@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:21:46 by yichinos          #+#    #+#             */
/*   Updated: 2023/06/12 12:31:23 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(std::string str)
{
	name = str;
}

std::string Zombie::getName(void)
{
	return name;
}

void	Zombie::announce(void)
{
	std::cout<<getName()<<": BraiiiiiiinnnzzzZ...\n";
}


Zombie::Zombie()
{
	std::cout<<"Zombie constructor called\n";
	return ;
}

Zombie::~Zombie()
{
	std::cout<<getName()<<" destractor called\n";
	return ;
}