/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:46:59 by yichinos          #+#    #+#             */
/*   Updated: 2023/08/01 20:12:14 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public :
		Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		~Dog();
		void makeSound(void) const;
		std::string getIdea(int i) const;
		void setIdea(int i, std::string idea);
	private :
		Brain *brain;
};

#endif