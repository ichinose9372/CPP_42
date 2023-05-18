/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:21:39 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/18 18:21:48 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <vector>

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
