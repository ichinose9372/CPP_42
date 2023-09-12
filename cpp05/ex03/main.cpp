/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:58:12 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/12 17:07:44 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

void test_intern_makeform(std::string formname, std::string target)
{
	Intern student;
	AForm *p_form;

	p_form = student.makeForm(formname, target);
	if (p_form == NULL)
		std::cout<< RED << "Not Create From " << NORMAL << std::endl;
	else 
	{
		std::cout << GREEN "Success !!" << NORMAL << std::endl;
		delete p_form;
	}
}


int main()
{
	//test intern make form
	test_intern_makeform("RobotomyRequest", "target");
	test_intern_makeform("PresidentialPardon", "target");
	test_intern_makeform("ShrubberyCreation", "target");
	test_intern_makeform("NOT-IN-FORM", "target");
	
	return (0);    
}

__attribute__((destructor)) static void destructor ()
{
	system("leaks -q a.out ");
}