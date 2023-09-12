/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 23:06:01 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/12 16:39:07 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

#define RED "\x1b[31m"
#define NORMAL "\033[0m"
#define GREEN "\x1b[32m" 
#define YELLOW "\x1b[33m"

class Bureaucrat;

class AForm 
{
	public :
		AForm();
		AForm(const AForm &other);
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		AForm &operator=(const AForm &other);
		virtual ~AForm();
		const std::string getName(void) const;
		bool getIsSigned(void) const;
		int getGradeToSign(void) const;
		int getGradeToExecute(void) const;
		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class FormNotSignedException : public std::exception
		{
			virtual const char *what() const throw();
		};
		void beSigned(Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const &executor) const = 0;
	private :
		const std::string name;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExecute;
};

std::ostream &operator<<(std::ostream &os, const AForm &other);
#endif