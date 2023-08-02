/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:49:02 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/08/02 18:41:46 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(const AForm &other);
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		AForm &operator=(const AForm &other);
		~AForm();
		const std::string getName(void) const;
		bool getIsSigned(void) const;
		int &getGradeToSign(void) const;
		int &getGradeToExecute(void) const;
		virtual void execute(Bureaucrat const &executor) const = 0;
	private:
		const std::string name;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExecute;
};

#endif