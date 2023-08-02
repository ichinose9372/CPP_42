/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:36:03 by yichinos          #+#    #+#             */
/*   Updated: 2023/08/02 18:38:11 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	this->_target = "";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & other) : AForm(other)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	this->_target = other._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & other)
{
	std::cout << "ShrubberyCreationForm assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_target = other._target;
	}
	return (*this);
}