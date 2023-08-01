/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:07:59 by yichinos          #+#    #+#             */
/*   Updated: 2023/08/01 20:12:42 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	this->brain = new Brain("Cat Brain");
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat assignation operator called" << std::endl;
	this->brain = new Brain();
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << " - - - - - - - - - - - -(cat)" << std::endl;
}

std::string Cat::getIdea(int i) const
{
	return (this->brain->getIdea(i));
}

void Cat::setIdea(int i, std::string idea)
{
	this->brain->setIdea(i, idea);
}