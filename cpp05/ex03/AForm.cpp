/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 23:08:33 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/08/03 12:42:24 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("default"), isSigned(false), gradeToSign(150), gradeToExecute(150)
{
	std::cout << "Form constructor called" << std::endl;
}

AForm::AForm(const AForm &other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
	std::cout << "Form copy constructor called" << std::endl;
}

AForm::AForm(std::string name, int gradeTosin, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeTosin), gradeToExecute(gradeToExecute)
{
	if (gradeTosin < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeTosin > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	std::cout << "Form constructor called" << std::endl;
}

AForm::~AForm()
{
	std::cout << "Form destructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
	std::cout << "Form assignation operator called" << std::endl;
	if (this != &other)
		this->isSigned = other.isSigned;
	return (*this);
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char*AForm::FormNotSignedException::what() const throw()
{
	return ("Form is not signed");
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeToSign)
		throw GradeTooLowException();
	this->isSigned = true;
}

const std::string AForm::getName(void) const
{
	return (this->name);
}

bool AForm::getIsSigned(void) const
{
	return (this->isSigned);
}

int AForm::getGradeToSign(void) const
{
	return ((int &)this->gradeToSign);
}

int AForm::getGradeToExecute(void) const
{
	return ((int &)this->gradeToExecute);
}

std::ostream &operator<<(std::ostream &os, const AForm &other)
{
	os << "Form name: " << other.getName() << std::endl;
	if (other.getIsSigned())
		os << "Form signed : Sined" << std::endl;
	else
		os << "Form signed : Not signed" << std::endl;
	os << "Form gradeToSign: " << other.getGradeToSign() << std::endl;
	os << "Form gradeToExecute: " << other.getGradeToExecute();
	return (os);
}