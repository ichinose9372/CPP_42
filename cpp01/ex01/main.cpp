/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <$yichinos@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:21:06 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/06/12 12:34:24 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *tmp;
	Zombie *tmp2;
	tmp = zombieHorde(5, "hoge");
	tmp2 = zombieHorde(30, "fuga");

	delete[] tmp;
	delete[] tmp2;

	return (0);
}
