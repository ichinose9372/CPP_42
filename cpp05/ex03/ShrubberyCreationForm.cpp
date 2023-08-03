/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:17:28 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/08/03 16:55:15 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShurubberyCreationForm::ShurubberyCreationForm() : AForm("default", 145, 137), target("default")
{
    std::cout << "ShurubberyCreationForm constructor called" << std::endl;
}

ShurubberyCreationForm::ShurubberyCreationForm(const ShurubberyCreationForm &other) : AForm(other), target(other.target)
{
    std::cout << "ShurubberyCreationForm copy constructor called" << std::endl;
}

ShurubberyCreationForm::ShurubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
    std::cout << "ShurubberyCreationForm constructor called" << std::endl;
}

ShurubberyCreationForm::~ShurubberyCreationForm()
{
    std::cout << "ShurubberyCreationForm destructor called" << std::endl;
}

ShurubberyCreationForm &ShurubberyCreationForm::operator=(const ShurubberyCreationForm &other)
{
    std::cout << "ShurubberyCreationForm assignation operator called" << std::endl;
    if (this != &other)
        this->target = other.target;
    return (*this);
}

void    ShurubberyCreationForm::execute(Bureaucrat const &executer) const
{
    if (this->getGradeToExecute() < executer.getGrade())
        throw GradeTooLowException();
    std::ofstream ofs(this->target + "_shrubbery");
    ofs << "      _-_" << std::endl;
    ofs << "   /~~   ~~\\" << std::endl;
    ofs << " /~~         ~~\\" << std::endl;
    ofs << "{               }" << std::endl;
    ofs << " \\  _-     -_  /" << std::endl;
    ofs << "   ~  \\\\ //  ~" << std::endl;
    ofs << "_- -   | | _- _" << std::endl;
    ofs << "  _ -  | |   -_" << std::endl;
    ofs << "      // \\\\" << std::endl;
    ofs << "     //   \\\\" << std::endl;
    ofs << "    //     \\\\" << std::endl;
    ofs << "   //       \\\\" << std::endl;
    ofs << "  //         \\\\" << std::endl;
    ofs << " //           \\\\" << std::endl;
    ofs << "//             \\\\" << std::endl;
    ofs << "___________________" << std::endl;
    ofs.close(); 
}