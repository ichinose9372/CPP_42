/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:27:07 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/04 13:31:40 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
	return (0);
}