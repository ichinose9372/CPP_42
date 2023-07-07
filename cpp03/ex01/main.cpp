/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <$yichinos@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:27:07 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/07 15:50:03 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap claptrap("ICHNIOS");
	ClapTrap claptrap2("SATAHARU");
	ClapTrap claptrap3("BUN");
	claptrap.attack("BUN");
	claptrap2.takeDamage(11);
	claptrap.beRepaired(100);
	claptrap3.attack("SATAHARU");
	claptrap3.takeDamage(10);
	claptrap3.beRepaired(100);
	ScavTrap scavtrap("TASHIRO");
	ScavTrap scavtrap2("KAWAMURA");
	ScavTrap scavtrap3(scavtrap2);
	scavtrap.guardGate();
	scavtrap2.guardGate();
	scavtrap.attack("KAWAMURA");
	return (0);
}
