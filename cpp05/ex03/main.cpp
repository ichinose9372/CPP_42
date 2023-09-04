/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:58:12 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/04 13:28:25 by ichinoseyuu      ###   ########.fr       */
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

int main()
{
	Intern intern;
	try
	{
		AForm *form = intern.makeForm("RobotomyRequest", "Bender");
		form->execute(Bureaucrat("Bender", 1));

		AForm *form2 = intern.makeForm("PresidentialPardon", "Bender");
		form2->execute(Bureaucrat("Bender", 1));

		AForm *form3 = intern.makeForm("ShrubberyCreation", "Bender");
		form3->execute(Bureaucrat("Bender", 1));

		AForm *form4 = intern.makeForm("-----------------", "Bender");
		form4->execute(Bureaucrat("Bender", 1));
		
	}
	catch(const std::exception& e)
	{
    	std::cerr << "Failed to create form." << e.what()<< std::endl;
	}
	return (0);
}