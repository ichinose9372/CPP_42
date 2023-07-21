/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:39:56 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/21 13:26:36 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string type;
		Animal();
		Animal(std::string type);
		Animal(const Animal &other);
	public:
		Animal &operator=(const Animal &other);
		virtual ~Animal();
		std::string getType(void) const;
		virtual void makeSound(void) const = 0;
};

#endif