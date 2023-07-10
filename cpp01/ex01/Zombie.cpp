/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:02:26 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/07/10 11:25:40 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(std::string str)
{
	this->name = str;
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
