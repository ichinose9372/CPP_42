/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:58:12 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/12 15:37:58 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    {
        Bureaucrat tester("tester", 150);
    
        PresidentialPardonForm p_form("defoult");
        ShrubberyCreationForm s_form("defoult");
        RobotomyRequestForm r_form("defoult");
    
        tester.executeForm(p_form);
        tester.executeForm(r_form);
        tester.executeForm(s_form);
    }
    {
        Bureaucrat tester("tester", 150);
    
        PresidentialPardonForm p_form("defoult");
        ShrubberyCreationForm s_form("defoult");
        RobotomyRequestForm r_form("defoult");
    
        tester.signForm(p_form);
        tester.signForm(s_form);
        tester.signForm(r_form);

        tester.executeForm(p_form);
        tester.executeForm(r_form);
        tester.executeForm(s_form);
       
    }
    
    return (0);
}