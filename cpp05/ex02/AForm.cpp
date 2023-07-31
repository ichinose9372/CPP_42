/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:54:58 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/07/29 13:01:08 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("default"), isSigned(false), gradeToSign(1), gradeToExecute(1)
{
    std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(const AForm &other)
{
    std::cout << "AForm copy constructor called" << std::endl;
    *this = other;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout << "AForm constructor called" << std::endl;
}

AForm::~AForm()
{
    std::cout << "AForm destructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
    std::cout << "AForm assignation operator called" << std::endl;
    if (this != &other)
        this->isSigned = other.isSigned;
    return (*this);
}

