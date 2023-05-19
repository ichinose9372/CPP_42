/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:02:26 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/05/19 14:24:24 by ichinoseyuu      ###   ########.fr       */
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
	return;
}
