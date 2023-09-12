/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:36:40 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/12 16:21:09 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : grade(0), name("default") 
{}

Bureaucrat::Bureaucrat(const Bureaucrat &other) 
{
	*this = other;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
	if (grade < 1)
		throw GradeTooLowException();
	else if (grade > 150)
		throw GradeTooHighException();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{}


int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}


std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

void Bureaucrat::incrementGrade(void)
{
	if (this->grade < 2)
		throw GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrementGrade(void)
{
	if (this->grade > 149)
		throw GradeTooLowException();
	this->grade++;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		this->grade = other.getGrade();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &other)
{
	os << other.getName() << ", bureaucrat grade " << other.getGrade();
	return (os);
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return "Bureaucrat grade too low!";
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat grade too high!";
}

void Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signs " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form)
{
	if (!form.getIsSigned())
	{
		std::cout << "Not Signed form" << std::endl;
		return ;
	}
	else
	{
		try
		{
			form.execute(*this);
			std::cout << this->name << " executes " << form.getName() << std::endl;
		}
		catch(const std::exception& e)
		{
				std::cout << this->name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
		}
		
	}
}