/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 23:08:33 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/12 15:47:41 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), isSigned(false), gradeToSign(150), gradeToExecute(150)
{}

Form::Form(const Form &other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{}

Form::Form(std::string name, int gradeTosin, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeTosin), gradeToExecute(gradeToExecute)
{
	if (gradeTosin < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeTosin > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

Form::~Form()
{}

Form &Form::operator=(const Form &other)
{
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
		os << GREEN <<"Form signed : Sined" << NORMAL << std::endl;
	else
		os << RED << "Form signed : Not signed" << NORMAL<< std::endl;
	os << "Form gradeToSign: " << other.getGradeToSign() << std::endl;
	os << "Form gradeToExecute: " << other.getGradeToExecute();
	return (os);
}