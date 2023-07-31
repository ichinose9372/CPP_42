/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:49:02 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/07/29 12:59:25 by ichinoseyuu      ###   ########.fr       */
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
        int getGradeToSign(void) const;
        int getGradeToExecute(void) const;
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;
};

#endif