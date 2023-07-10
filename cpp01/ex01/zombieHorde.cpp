/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:05:22 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/07/10 11:25:30 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *tmp = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		tmp[i].setName(name);
		tmp[i].announce();
	}
	return tmp;
}

