/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:54:58 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/08/02 18:38:33 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("default"), isSigned(false), gradeToSign(150), gradeToExecute(150)
{
	std::cout << "AForm default constructor called" << std::endl;
}

// AForm::AForm(const AForm &other)
// {
// 	std::cout << "AForm copy constructor called" << std::endl;
// 	*this = other;
// }

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	std::cout << "AForm constructor called" << std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
	std::cout << "AForm assignation operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.getName();
		this->isSigned = other.getIsSigned();
		this->gradeToSign = other.getGradeToSign();
		this->gradeToExecute = other.getGradeToExecute();
	}
	return (*this);
}

const std::string AForm::getName(void) const
{
	return (this->name);
}

bool AForm::getIsSigned(void) const
{
	return (this->isSigned);
}

int &AForm::getGradeToSign(void) const
{
	return ((int &)this->gradeToSign);
}

int &AForm::getGradeToExecute(void) const
{
	return ((int &)this->gradeToExecute);
}
