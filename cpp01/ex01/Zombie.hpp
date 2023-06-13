/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <$yichinos@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:47:54 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/06/12 12:32:12 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <vector>

class Zombie
{
	public:
		void setName(std::string str);
		void announce(void);
		Zombie();
		~Zombie();
	private:
		std::string name;

};

Zombie *zombieHorde(int N, std::string name);

#endif
