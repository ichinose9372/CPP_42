/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:58:12 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/12 14:56:04 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void Test_makeForm(int Tosign, int Toexec)
{
	std::cout << YELLOW << "\n<<<<<<<<<<<<<< Test Constractor (  Case sign = " << Tosign << " exec = " << Toexec <<" ) >>>>>>>>>>>>" << NORMAL <<std::endl;
	try
	{
		Form testForm("TestForm",Tosign, Toexec);
		std::cout << testForm << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

void Test_besigned(int b_grade, int Tosign, int Toexec)
{
	std::cout << YELLOW << "<<<<<<<<<<< test besigned ( Case b_grade=" << b_grade \
	<< " Tosign="<< Tosign << " Toexex=" << Toexec << " ) >>>>>>>>>>>>>" << NORMAL << std::endl;
	Bureaucrat Bob("Bob", b_grade);
	Form testForm("testForm", Tosign, Toexec);
	std::cout << "------------------------\n" << testForm << "\n" <<std::endl;
	try
	{
		testForm.beSigned(Bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------after signed-------\n" << testForm << "\n" <<std::endl;
}

void Test_signeform(int b_grade, int Tosign, int Toexec)
{
	std::cout << YELLOW << "<<<<<<<<<<< test signform ( Case b_grade=" << b_grade \
	<< " Tosign="<< Tosign << " Toexex=" << Toexec << " ) >>>>>>>>>>>>>" << NORMAL <<std::endl;
	Bureaucrat Bob("Bob", b_grade);
	Form testform("testform", Tosign, Toexec);
	
	Bob.signForm(testform);
}



int main(void)
{
	//test makeForm
	{
		Test_makeForm(42, 9);
		Test_makeForm(151, 149);
		Test_makeForm(149, 151);
		Test_makeForm(0, 1);
		Test_makeForm(1,1);
		Test_makeForm(-1, 3);
		Test_makeForm(3, -1);
	}
	// besigned test
	{
		Test_besigned(42, 50, 10);
		Test_besigned(42, 41, 40);
		Test_besigned(42, 42, 10);
	}
	// signForm test
	{
		Test_signeform(42,50,1);
		Test_signeform(42,41,40);
		Test_signeform(42, 42, 41);
	}
	return (0);
}