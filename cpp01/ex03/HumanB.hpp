/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:36:46 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/10 11:42:45 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	public:
		void	attack();
		void	setName(std::string name);
		void	setWeapon(Weapon &tmp);
		std::string getName(void);
		HumanB(std::string name);
		~HumanB();
	private:
		Weapon *B_Weapon;
		std::string name;
};

#endif
