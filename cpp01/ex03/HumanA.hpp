/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:34:48 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/05/19 16:30:55 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	public:
		void attack();
		HumanA(std::string name, Weapon &tmp);
		void	setName(std::string nama);
		std::string getName(void);
		void	setWeapon(Weapon &tmp);
	private:
		Weapon &_A;
		std::string _name;
};
#endif
