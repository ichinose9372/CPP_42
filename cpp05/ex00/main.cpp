/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:58:12 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/12 13:16:44 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void Test_constructor(int grade)
{
	std::cout << "\n<<<<<<<<<<<<<< Test Constractor (  Case " << grade << " ) >>>>>>>>>>>>\n" << std::endl;
	try
	{
		Bureaucrat tester("tester", grade);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	{
		//constructor test
		Test_constructor(42);
		Test_constructor(1);
		Test_constructor(0);
		Test_constructor(-1);
		Test_constructor(150);
		Test_constructor(151);
	}
	{
		std::cout << "------------- incriment test ----------------" << std::endl;
		Bureaucrat tester("tester", 3);
		try
		{
			std::cout << tester << std::endl;
			tester.incrementGrade();
			std::cout << tester << std::endl;
			tester.incrementGrade();
			std::cout << tester << std::endl;
			tester.incrementGrade();
			std::cout << tester << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "---------------decriment test --------------------" << std::endl;
		Bureaucrat tester("tester", 148);
		try
		{
			std::cout << tester << std::endl;
			tester.decrementGrade();
			std::cout << tester << std::endl;
			tester.decrementGrade();
			std::cout << tester << std::endl;
			tester.decrementGrade();
			std::cout << tester << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
	return (0);
}