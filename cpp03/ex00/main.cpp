/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:27:07 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/10 13:45:04 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap yichinos("ICHNIOS");
	ClapTrap sataharu("SATAHARU");
	ClapTrap bun("BUN");
	yichinos.attack("BUN");
	sataharu.takeDamage(0);
	yichinos.beRepaired(100);
	bun.attack("SATAHARU");
	bun.takeDamage(10);
	bun.beRepaired(100);
	return (0);
}