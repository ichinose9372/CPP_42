/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <$yichinos@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:21:39 by yichinos          #+#    #+#             */
/*   Updated: 2023/06/12 12:26:18 by yichinos         ###   ########.fr       */
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
		~Zombie();
	private :
		std::string name;
};
	void		randomChump(std::string name);
	Zombie		*newZombie(std::string name);

#endif
