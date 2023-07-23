/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:36:40 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/23 13:55:39 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : grade(0), name("default") 
{
	std::cout << "Bureaucrat default constructor called" << std::endl;	
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : grade(other.getGrade()), name(other.getName()) 
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;	
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;	
}


int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}


std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Bureaucrat assignation operator called" << std::endl;
	if (this != &other)
	{
		this->grade = other.getGrade();
		this->name = other.getName();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &other)
{
	os << other.getName() << ", bureaucrat grade " << other.getGrade() << std::endl;
	return (os);
}