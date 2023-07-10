/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:34:48 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/07/10 11:42:15 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	public:
		void	attack();
		void	setName(std::string name);
		void	setWeapon(Weapon &tmp);
		std::string getName(void);
		HumanA(std::string name, Weapon &tmp);
		~HumanA();
	private:
		Weapon &A_Weapon;
		std::string name;
};
#endif
