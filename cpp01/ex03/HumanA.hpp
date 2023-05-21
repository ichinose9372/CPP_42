/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:34:48 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/05/21 11:54:55 by yichinos         ###   ########.fr       */
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
	private:
		Weapon &_A;
		std::string _name;
};
#endif
