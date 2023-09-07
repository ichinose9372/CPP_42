/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:58:12 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/07 22:11:39 by ichinoseyuu      ###   ########.fr       */
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
		try
		{
			Form form;
			std::cout << form << std::endl;
			bob.signForm(form);
			std::cout << form << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "---------------------" << std::endl;
	}
	{
		std::cout << "<<<<<<<<<<<<< test2 >>>>>>>>>>>>>>>>>" << std::endl;
		Bureaucrat bob("bob", 42);
		std::cout << "---------------------" << std::endl;
		std::cout << bob << std::endl;
		std::cout << "---------------------" << std::endl;
		try
		{
			Form form("form", 42, 2);
			Form form2(form);
			Form form3;
			form3 = form2;
			bob.signForm(form);
			bob.signForm(form2);
			bob.signForm(form3);
			std::cout << form << std::endl;
			std::cout << "---------------------" << std::endl;
			std::cout << form2 << std::endl;
			std::cout << "---------------------" << std::endl;
			std::cout << form3 << std::endl;
			std::cout << "---------------------" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "<<<<<<<<<<<<< test3 >>>>>>>>>>>>>>>>>" << std::endl;
		Bureaucrat bob("bob", 42);
		std::cout << "---------------------" << std::endl;
		std::cout << bob << std::endl;
		std::cout << "---------------------" << std::endl;
		try
		{
			Form form("form", 2, 2);
			bob.signForm(form);
			std::cout << form << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "---------------------" << std::endl;
	}
	{
		std::cout << "<<<<<<<<<<<<< test4 >>>>>>>>>>>>>>>>>" << std::endl;
		Bureaucrat bob("bob", 1);
		std::cout << "---------------------" << std::endl;
		std::cout << bob << std::endl;
		std::cout << "---------------------" << std::endl;
		try
		{
			Form form("form", 1, 2);
			bob.signForm(form);
			std::cout << form << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "---------------------" << std::endl;
	}

	{
		std::cout << "<<<<<<<<<<<<< test5 >>>>>>>>>>>>>>>>>" << std::endl;
		Bureaucrat bob("bob", 42);
		std::cout << "---------------------" << std::endl;
		std::cout << bob << std::endl;
		std::cout << "---------------------" << std::endl;
		try
		{
			Form form("form", 151, 2);
			bob.signForm(form);
			std::cout << form << std::endl;
		}
		catch(const  std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		std::cout << "<<<<<<<<<<<<< test6 >>>>>>>>>>>>>>>>>" << std::endl;
		Bureaucrat bob("bob", 42);
		std::cout << "---------------------" << std::endl;
		std::cout << bob << std::endl;
		std::cout << "---------------------" << std::endl;
		try
		{
			Form form("form", 42, 151);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}

	{
		std::cout << "<<<<<<<<<<<<< test7 >>>>>>>>>>>>>>>>>" << std::endl;
		Bureaucrat bob("bob", 42);
		std::cout << "---------------------" << std::endl;
		std::cout << bob << std::endl;
		std::cout << "---------------------" << std::endl;
		try
		{
			Form form("form", 0, 42);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}

	{
		std::cout << "<<<<<<<<<<<<< test8 >>>>>>>>>>>>>>>>>" << std::endl;
		Bureaucrat bob("bob", 42);
		std::cout << "---------------------" << std::endl;
		std::cout << bob << std::endl;
		try
		{
			Form form("form", 42, 0);
			
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "<<<<<<<<<<<<< test9 >>>>>>>>>>>>>>>>>" << std::endl;
		Bureaucrat bob("bob", 42);
		std::cout << "---------------------" << std::endl;
		std::cout << bob << std::endl;
		try
		{
			Form form("form", 151, 152);
			
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	return (0);
}