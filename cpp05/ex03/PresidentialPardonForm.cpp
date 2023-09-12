/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:42:47 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/12 16:52:59 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5), target("default")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), target(other.target)
{}

PresidentialPardonForm::~PresidentialPardonForm(void)
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this != &other)
        this->target = other.target;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executer) const
{
   if (this->getGradeToExecute() < executer.getGrade())
        throw GradeTooLowException();
    std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}