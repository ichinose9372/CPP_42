/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:39:46 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/13 15:43:27 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *new_zombie = newZombie("heap");
	if (!new_zombie)
		return 1;
	randomChump("stack");
	delete new_zombie;
	system("leaks program");
	return 0;
}
