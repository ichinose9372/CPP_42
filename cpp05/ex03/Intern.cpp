/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:11:28 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/12 17:10:06 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

Intern::~Intern()
{}

AForm *Intern::createPresidentialForm(const std::string target) const
{
	return (new PresidentialPardonForm(target));
}

AForm *Intern::createRobotomyForm(const std::string target) const
{
	return (new RobotomyRequestForm(target));
}

AForm *Intern::createShrubberyForm(const std::string target) const
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
	std::string formNames[3] = {"RobotomyRequest", "PresidentialPardon", "ShrubberyCreation"};
	AForm *(Intern::*createForms[3])(const std::string target) const = {&Intern::createRobotomyForm, &Intern::createPresidentialForm, &Intern::createShrubberyForm};

	for (int i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return ((this->*createForms[i])(target));
		}
	}
	std::cout << "Error: Failed to create Form object. Invalid parameters." << std::endl;
	return (NULL); 
}