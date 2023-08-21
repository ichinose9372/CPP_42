/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:58:12 by yichinos          #+#    #+#             */
/*   Updated: 2023/08/21 12:51:02 by yichinos         ###   ########.fr       */
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
	Intern		I1;
	AForm		*FormPtr;
	Bureaucrat	B1("Naelle", 1);
	{
		FormPtr = I1.makeForm("shrubberycreation", "Manuel");

		if (FormPtr)
		{
			std::cout << *FormPtr << std::endl;
			B1.signForm(*FormPtr);
			FormPtr->execute(B1);

			delete (FormPtr);
		}
	}

}