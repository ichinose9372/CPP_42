/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:31:20 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/25 22:15:28 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

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
		class GradeTooLowException: public std::exception {
			virtual const char*	what() const throw();
		};
		class GradeTooHighException: public std::exception {
			virtual const char*	what() const throw();
		};
	private:
		int grade;
		std::string name;
};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &other);
#endif