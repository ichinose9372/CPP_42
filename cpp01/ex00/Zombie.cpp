/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:21:46 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/10 11:22:20 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(std::string str)
{
	this->name = str;
}

void	Zombie::announce(void)
{
	std::cout<< this->name <<": BraiiiiiiinnnzzzZ...\n";
}


Zombie::Zombie()
{
	std::cout<<"Zombie constructor called\n";
	return ;
}

Zombie::~Zombie()
{
	std::cout<< this->name <<" destractor called\n";
	return ;
}
