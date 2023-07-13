/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:21:06 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/07/13 15:44:12 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *tmp = zombieHorde(1, "RED");
	Zombie *tmp2 =zombieHorde(2, "BLEU");
	Zombie *tmp3 = zombieHorde(3, "GREEN");

	tmp->announce();
	tmp2[0].announce();
	tmp2[1].announce();
	tmp3[0].announce();
	tmp3[1].announce();
	
	delete[] tmp;
	delete[] tmp2;
	delete[] tmp3;

	system("leaks program");
	return (0);
}
