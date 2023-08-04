/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:17:28 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/08/04 12:20:29 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default", 145, 137), target("default")
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), target(other.target)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShurubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	std::cout << "ShrubberyCreationForm assignation operator called" << std::endl;
	if (this != &other)
		this->target = other.target;
	return (*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executer) const
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