/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:08:24 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/08/21 12:47:39 by yichinos         ###   ########.fr       */
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
		class InvalidFormException : public std::exception {
			public:
				const char* what(void) const throw();
		};
};
#endif