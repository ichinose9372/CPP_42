/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:08:24 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/04 13:15:48 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &other);
		Intern &operator=(const Intern &other);
		~Intern();
		AForm *makeForm(std::string formName, std::string target);
		AForm *createPresidentialForm(const std::string target) const;
		AForm *createRobotomyForm(const std::string target) const;
		AForm *createShrubberyForm(const std::string target) const;
		class InvalidFormException : public std::exception 
		{
			public:
				const char* what(void) const throw();
		};
};
#endif