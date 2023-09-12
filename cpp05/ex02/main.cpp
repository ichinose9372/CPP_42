/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:58:12 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/12 16:13:05 by ichinoseyuu      ###   ########.fr       */
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
        std::cout << YELLOW << "<<<< test NOT singed >>>>>" << NORMAL << std::endl;
        Bureaucrat tester("tester", 150);
    
        ShrubberyCreationForm s_form("defoult");
        RobotomyRequestForm r_form("defoult");
        PresidentialPardonForm p_form("defoult");
    
        tester.executeForm(s_form);
        tester.executeForm(r_form);
        tester.executeForm(p_form);
    }
    {
        std::cout << YELLOW << "<<<< test Grade too low >>>>>" << NORMAL << std::endl;
        Bureaucrat tester("tester", 150);
    
        ShrubberyCreationForm s_form("defoult");
        RobotomyRequestForm r_form("defoult");
        PresidentialPardonForm p_form("defoult");
    
        tester.signForm(s_form);
        tester.signForm(r_form);
        tester.signForm(p_form);

        tester.executeForm(s_form);
        tester.executeForm(r_form);
        tester.executeForm(p_form);
       
    }
    {
        std::cout << YELLOW << "<<<< test only Shrubbery >>>>>" << NORMAL << std::endl;
        Bureaucrat tester("tester", 100);
    
        ShrubberyCreationForm s_form("defoult");
        RobotomyRequestForm r_form("defoult");
        PresidentialPardonForm p_form("defoult");
    
        tester.signForm(s_form);
        tester.signForm(r_form);
        tester.signForm(p_form);

        tester.executeForm(s_form);
        tester.executeForm(r_form);
        tester.executeForm(p_form);
    }
    {
        std::cout << YELLOW << "<<<< test Shurubbery and Robotomy >>>>>" << NORMAL << std::endl;
        Bureaucrat tester("tester", 42);
    
        ShrubberyCreationForm s_form("defoult");
        RobotomyRequestForm r_form("defoult");
        PresidentialPardonForm p_form("defoult");
    
        tester.signForm(s_form);
        tester.signForm(r_form);
        tester.signForm(p_form);

        tester.executeForm(s_form);
        tester.executeForm(r_form);
        tester.executeForm(p_form);
    }
    {
        std::cout << YELLOW << "<<<< test ALL Form >>>>>" << NORMAL << std::endl;
        Bureaucrat tester("tester", 1);
    
        ShrubberyCreationForm s_form("defoult");
        RobotomyRequestForm r_form("defoult");
        PresidentialPardonForm p_form("defoult");
    
        tester.signForm(s_form);
        tester.signForm(r_form);
        tester.signForm(p_form);

        tester.executeForm(s_form);
        tester.executeForm(r_form);
        tester.executeForm(p_form);
    }
    
    
    return (0);
}