/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:27:07 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/19 11:35:39 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap RED("RED");
	ClapTrap BLUE("BLUE");
	ClapTrap GREEN("GREEN");
	ClapTrap DEMON("DEMON");
	RED.attack("DEMON");
	DEMON.takeDamage(10);
	RED.beRepaired(10);
	GREEN.attack("DEMON");
	DEMON.takeDamage(10);
	GREEN.beRepaired(100);
	return (0);
}