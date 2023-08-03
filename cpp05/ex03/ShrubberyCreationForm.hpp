/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:17:05 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/08/03 12:26:57 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class Breaucrat;

class ShurubberyCreationForm : public AForm
{
    public :
        ShurubberyCreationForm();
        ShurubberyCreationForm(const ShurubberyCreationForm &other);
        ShurubberyCreationForm(std::string target);
        ShurubberyCreationForm &operator=(const ShurubberyCreationForm &other);
        ~ShurubberyCreationForm();
        void execute(Bureaucrat const &executor) const;
    private :
        std::string target;
};

#endif