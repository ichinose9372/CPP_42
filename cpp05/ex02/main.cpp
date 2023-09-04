/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:58:12 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/04 12:56:40 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	{
		Bureaucrat bob("bob", 1);
		ShrubberyCreationForm form("Shrubbery");
		Bureaucrat tom("tom", 150);
		RobotomyRequestForm form2("Robotomy");
		Bureaucrat jerry("jerry", 25);
		PresidentialPardonForm form3("Presidential");
	}

	//test cpp05-ex02
	{
		std::cout << "test cpp05-ex02" << std::endl;
		Bureaucrat bob("bob", 1);
		ShrubberyCreationForm form("Shrubbery");
		Bureaucrat tom("tom", 150);
		RobotomyRequestForm form2("Robotomy");
		Bureaucrat jerry("jerry", 25);
		PresidentialPardonForm form3("Presidential");

		std::cout << bob << std::endl;
		std::cout << form << std::endl;
		std::cout << tom << std::endl;
		std::cout << form2 << std::endl;
		std::cout << jerry << std::endl;
		std::cout << form3 << std::endl;

		bob.signForm(form);
		bob.executeForm(form);
		bob.signForm(form2);
		bob.executeForm(form2);
		bob.signForm(form3);
		bob.executeForm(form3);
		std::cout << std::endl;

		tom.signForm(form);
		tom.executeForm(form);
		tom.signForm(form2);
		tom.executeForm(form2);
		tom.signForm(form3);
		tom.executeForm(form3);
		std::cout << std::endl;

		jerry.signForm(form);
		jerry.executeForm(form);
		jerry.signForm(form2);
		jerry.executeForm(form2);
		jerry.signForm(form3);
		jerry.executeForm(form3);
		std::cout << std::endl;
	}
	
}