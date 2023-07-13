/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:21:46 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/13 15:45:58 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(std::string str)
{
	if (str != "")
		this->name = str;
	else
		this->name = "default";
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
