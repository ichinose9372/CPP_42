/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:11:28 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/08/03 17:42:29 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern &other)
{
    std::cout << "Intern copy constructor called" << std::endl;
    *this = other;
}  

Intern &Intern::operator=(const Intern &other)
{
    std::cout << "Intern assignation operator called" << std::endl;
    (void)other;
    return (*this);
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}

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
    std::string formNames[3] = {"robotomyrequest", "presidentialpardon", "shrubberycreation"};
    AForm *(Intern::*createForms[3])(const std::string target) const = {&Intern::createRobotomyForm, &Intern::createPresidentialForm, &Intern::createShrubberyForm};
    
    for (int i = 0; i < 3; i++)
    {
        if (formName == formNames[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return ((this->*createForms[i])(target));
        }
    }
    throw InvalidFormException();
    return (NULL); 
}

const char* Intern::InvalidFormException::what(void) const throw()
{
    return ("Intern can't create this form");
}