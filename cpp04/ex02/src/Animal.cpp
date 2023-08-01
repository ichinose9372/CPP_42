/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:48:33 by yichinos          #+#    #+#             */
/*   Updated: 2023/08/01 20:54:03 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	type = "NULL";
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal type constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
	return (type);
}

void Animal::makeSound(void) const
{
	std::cout << "NULL NULL NULL NULL NULL" << std::endl;
}