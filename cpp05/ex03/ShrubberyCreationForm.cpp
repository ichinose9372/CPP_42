/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:17:28 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/12 16:54:14 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default", 145, 137), target("default")
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), target(other.target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
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