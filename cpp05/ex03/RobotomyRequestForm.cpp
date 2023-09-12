/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:07:53 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/12 16:53:40 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("default", 72, 45), target("default")
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other)
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
        this->target = other.target;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executer) const
{
    if (this->getGradeToExecute() < executer.getGrade())
        throw GradeTooLowException();
    static int i;
    if (i % 2 == 0)
        std::cout << this->target << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->target << " has been failed to robotomized" << std::endl;
    i++;
}