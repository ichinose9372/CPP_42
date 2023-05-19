/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:05:22 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/05/19 14:29:13 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *tmp = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		tmp[i].setName(name);
		std::cout<<name;
		tmp[i].announce();
	}
	return tmp;
}

