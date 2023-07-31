/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:14:31 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/31 16:17:53 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = "\0";
	}
}

Brain::Brain(std::string ideas)
{
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = ideas;
	}
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain assignation operator called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(std::string idea)
{
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = idea;
	}
}