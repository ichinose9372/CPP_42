/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:47:54 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/05/19 14:29:18 by ichinoseyuu      ###   ########.fr       */
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
	private:
		std::string name;

};

Zombie *zombieHorde(int N, std::string name);

#endif
