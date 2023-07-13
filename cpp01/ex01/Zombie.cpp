/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:02:26 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/07/13 15:45:21 by yichinos         ###   ########.fr       */
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

void Zombie::announce(void)
{
	std::cout<< this->name << ": BraiiiiiiinnnzzzZ..."<<std::endl;
}


Zombie::Zombie()
{
	std::cout<<"Zombie constructor called"<<std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout << "destractor called\n";
	return;
}
