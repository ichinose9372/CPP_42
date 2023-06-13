/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <$yichinos@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:02:26 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/06/12 12:33:35 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(std::string str)
{
	name = str;
}

void Zombie::announce(void)
{
	std::cout << ": BraiiiiiiinnnzzzZ..."<<std::endl;
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
