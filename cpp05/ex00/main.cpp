/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:58:12 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/07 22:02:24 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	
	{
		try
		{
			std::cout << "<<<<<<<<<<<<<< grade increment  decrement >>>>>>>>>>>>>>" << std::endl;
			Bureaucrat bob("bob", 50);
			std::cout << bob << std::endl;
			bob.incrementGrade();
			std::cout << bob << std::endl;
			bob.incrementGrade();
			std::cout << bob << std::endl;
			bob.decrementGrade();
			std::cout << bob << std::endl;
			bob.decrementGrade();
			std::cout << bob << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "<<<<<<<<<<<<<<<<<<<<<<< grade too low >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
		try
		{
			Bureaucrat bob("bob", 42);
			std::cout << bob << std::endl;
			Bureaucrat bob1("bob", 0);
			std::cout << bob1 << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "<<<<<<<<<<<<<<< grade too hight >>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
		try
		{
			Bureaucrat bob("bob", 42);
			std::cout << bob << std::endl;
			Bureaucrat bob1("bob", -1);
			std::cout << bob1 << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	{
		std::cout << "<<<<<<<<<<<<< construction error >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
		try
		{
			Bureaucrat bob("bob", 42);
			std::cout << bob << std::endl;
			Bureaucrat bob1("bob1", 151);
			std::cout << bob1 << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "<<<<<<<<<<<<<<<< grade increment >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
		try
		{
			Bureaucrat bob("bob", 3);
			std::cout << bob << std::endl;
			bob.incrementGrade();
			std::cout << bob << std::endl;
			bob.incrementGrade();
			std::cout << bob << std::endl;
			bob.incrementGrade();
			std::cout << bob << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "<<<<<<<<<<<<<<<< grade decrement >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
		try
		{
			Bureaucrat bob("bob", 148);
			bob.decrementGrade();
			std::cout << bob << std::endl;
			bob.decrementGrade();
			std::cout << bob << std::endl;
			bob.decrementGrade();
			std::cout << bob << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}	
	return (0);
}