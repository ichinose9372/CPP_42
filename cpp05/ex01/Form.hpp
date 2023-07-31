/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 23:06:01 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/07/29 11:40:10 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
    public :
        Form();
        Form(const Form &other);
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form &operator=(const Form &other);
        ~Form();
        const std::string getName(void) const;
        bool getIsSigned(void) const;
        int &getGradeToSign(void) const;
        int &getGradeToExecute(void) const;
        class GradeTooHighException : public std::exception
        {
            virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            virtual const char *what() const throw();
        };      
        void beSigned(Bureaucrat &bureaucrat);
    private :
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;
};

std::ostream &operator<<(std::ostream &os, const Form &other);
#endif