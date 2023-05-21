/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:36:46 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/21 11:50:25 by yichinos         ###   ########.fr       */
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
	private:
		Weapon *_b;
		std::string _name;
};

#endif
