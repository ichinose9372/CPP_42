/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 23:08:33 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/08/02 16:31:50 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), isSigned(false), gradeToSign(150), gradeToExecute(150)
{
	std::cout << "Form constructor called" << std::endl;
}

Form::Form(const Form &other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form::Form(std::string name, int gradeTosin, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeTosin), gradeToExecute(gradeToExecute)
{
	std::cout << "Form constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

Form &Form::operator=(const Form &other)
{
	std::cout << "Form assignation operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->isSigned = other.isSigned;
	return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeToSign)
		throw GradeTooLowException();
	this->isSigned = true;
}

const std::string Form::getName(void) const
{
	return (this->name);
}

bool Form::getIsSigned(void) const
{
	return (this->isSigned);
}

int &Form::getGradeToSign(void) const
{
	return ((int &)this->gradeToSign);
}

int &Form::getGradeToExecute(void) const
{
	return ((int &)this->gradeToExecute);
}

std::ostream &operator<<(std::ostream &os, const Form &other)
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