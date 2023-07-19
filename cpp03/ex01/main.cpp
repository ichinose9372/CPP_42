/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:27:07 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/19 12:03:36 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap RED("RED");
	ScavTrap BLUE("BLUE");
	ScavTrap GREEN("GREEN");
	ScavTrap DEMON("DEMON");
	RED.attack("DEMON");
	DEMON.takeDamage(10);
	RED.beRepaired(10);
	GREEN.attack("DEMON");
	DEMON.takeDamage(10);
	GREEN.beRepaired(100);
	RED.guardGate();
	BLUE.guardGate();
	GREEN.guardGate();
	DEMON.guardGate();
	return (0);
}
