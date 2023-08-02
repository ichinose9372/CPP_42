/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:58:12 by yichinos          #+#    #+#             */
/*   Updated: 2023/08/02 16:31:26 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main(void)
{
	{
		std::cout << "<<<<<<<<<<<<< test1 >>>>>>>>>>>>>>>>>" << std::endl;
		Bureaucrat bob("bob", 42);
		std::cout << "---------------------" << std::endl;
		std::cout << bob << std::endl;
		std::cout << "---------------------" << std::endl;
		Form form;
		std::cout << form << std::endl;
		try
		{
			bob.signForm(form);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << form << std::endl;
		std::cout << "---------------------" << std::endl;
	}
	{
		std::cout << "<<<<<<<<<<<<< test2 >>>>>>>>>>>>>>>>>" << std::endl;
		Bureaucrat bob("bob", 42);
		std::cout << "---------------------" << std::endl;
		std::cout << bob << std::endl;
		std::cout << "---------------------" << std::endl;
		Form form("form", 42, 2);
		try
		{
			bob.signForm(form);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << form << std::endl;
		std::cout << "---------------------" << std::endl;
	}
	{
		std::cout << "<<<<<<<<<<<<< test3 >>>>>>>>>>>>>>>>>" << std::endl;

		Bureaucrat bob("bob", 42);
		std::cout << "---------------------" << std::endl;
		std::cout << bob << std::endl;
		std::cout << "---------------------" << std::endl;
		Form form("form", 2, 2);
		try
		{
			bob.signForm(form);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << form << std::endl;
		std::cout << "---------------------" << std::endl;
	}
	{
		std::cout << "<<<<<<<<<<<<< test4 >>>>>>>>>>>>>>>>>" << std::endl;
		Bureaucrat bob("bob", 1);
		std::cout << "---------------------" << std::endl;
		std::cout << bob << std::endl;
		std::cout << "---------------------" << std::endl;
		Form form("form", 150, 2);
		try
		{
			bob.signForm(form);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << form << std::endl;
		std::cout << "---------------------" << std::endl;
	}

	return (0);
}