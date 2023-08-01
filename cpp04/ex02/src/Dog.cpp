/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:01:50 by yichinos          #+#    #+#             */
/*   Updated: 2023/08/01 20:13:32 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	this->brain = new Brain("Dog Brain");
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
	
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog Dog Dog Dog Dog Dog Dog" << std::endl;
}

std::string Dog::getIdea(int i) const
{
	return (this->brain->getIdea(i));
}

void Dog::setIdea(int i, std::string idea)
{
	this->brain->setIdea(i, idea);
}