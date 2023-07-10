/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:24:44 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/07/10 11:31:32 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	public:
		std::string getType(void) const;
		void		setType(std::string type);
		Weapon();
		Weapon(std::string str);
		~Weapon();
	private:
		std::string _type;
};

#endif
