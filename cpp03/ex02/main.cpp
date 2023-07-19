/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:27:07 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/19 12:37:24 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	{
		ClapTrap clap1("Ali");
		ClapTrap clap2 = clap1;
		clap2.attack("Bob");
		clap2.takeDamage(5);
		clap2.beRepaired(3);
		clap2 = clap1;
	}
	{
		std::cout << "---------------------------------------------------------------" << std::endl;
		ScavTrap scav1("Ali");
		ScavTrap scav2 = scav1;
		scav2.attack("Bob");
		scav2.takeDamage(5);
		scav2.beRepaired(3);
	}
	{
		std::cout << "---------------------------------------------------------------" << std::endl;
		FragTrap frag1("Ali");
		FragTrap frag2 = frag1;
		frag2.attack("Bob");
		frag2.takeDamage(5);
		frag2.beRepaired(3);
	}
	return (0);
}
