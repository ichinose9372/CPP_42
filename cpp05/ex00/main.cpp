/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:58:12 by yichinos          #+#    #+#             */
/*   Updated: 2023/08/02 14:17:59 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	{
		Bureaucrat def;
		std::cout << def << std::endl;
		Bureaucrat bob("bob", 42);
		std::cout << bob << std::endl;
		Bureaucrat bob2(bob);
		std::cout << bob2 << std::endl;
		Bureaucrat bob3;
		bob3 = bob2;
		std::cout << bob3 << std::endl;
		std::cout << "---------------------" << std::endl;
	}
	{
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
		std::cout << "---------------------" << std::endl;
	}
	{
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
		std::cout << "---------------------" << std::endl;
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
		std::cout << "---------------------" << std::endl;
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
		std::cout << "---------------------" << std::endl;
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
		std::cout << "---------------------" << std::endl;
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