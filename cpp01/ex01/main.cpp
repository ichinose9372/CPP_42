/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:21:06 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/07/10 11:28:33 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *tmp = zombieHorde(1, "RED");
	Zombie *tmp2 =zombieHorde(2, "BLEU");
	Zombie *tmp3 = zombieHorde(3, "GREEN");
	
	delete[] tmp;
	delete[] tmp2;
	delete[] tmp3;

	system("leaks program");
	return (0);
}
