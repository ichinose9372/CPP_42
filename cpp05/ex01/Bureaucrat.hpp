/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:31:20 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/12 14:37:14 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

#define RED "\x1b[31m"
#define NORMAL "\033[0m"
#define GREEN "\x1b[32m" 
#define YELLOW "\x1b[33m"

class Form;

class Bureaucrat
{
	public:
		 
		Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat(std::string name, int grade);
		Bureaucrat &operator=(const Bureaucrat &other);
		~Bureaucrat();
		std::string getName(void) const;
		int getGrade(void) const;
		void incrementGrade(void);
		void decrementGrade(void);
		class GradeTooLowException: public std::exception 
		{
			virtual const char*	what() const throw();
		};
		class GradeTooHighException: public std::exception 
		{
			virtual const char*	what() const throw();
		};
		void signForm(Form &form);
	private:
		int grade;
		const std::string name;
};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &other);
#endif