/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:21:39 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/19 14:07:08 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public :
		void		setName(std::string str);
		std::string getName(void);
		void		announce(void);
		Zombie();
	private :
		std::string name;
};
	void		randomChump(std::string name);
	Zombie		*newZombie(std::string name);

#endif
