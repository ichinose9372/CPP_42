/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 07:31:27 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/13 17:29:11 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base* generate(void)
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	int randVal = std::rand();

	if (randVal % 3 == 0)
		return new A;
	else if (randVal % 3 == 1)
		return new B;
	else
		return new C;
}

void test_generate_ptr(Base *base)
{
	if (dynamic_cast<A*>(base))
		std::cout << GREEN << " is (  A  )" << NORMAL << std::endl;
	else if (dynamic_cast<B*>(base))
		std::cout << GREEN << " is (  B  )" << NORMAL << std::endl;
	else if (dynamic_cast<C*>(base))
		std::cout << GREEN << " is (  C  )" << NORMAL << std::endl;
	else 
		std::cout << RED << "Unknown type!" << NORMAL << std::endl;
}

void test_generate_ref(Base &base)
{	
	try
	{
		A& a = dynamic_cast<A&>(base);
		(void) a;
		std::cout << GREEN << " is (  A  )" << NORMAL << std::endl;
		return ;
	}
	catch (const std::bad_cast&) {}
	try
	{
		B& b = dynamic_cast<B&>(base);
		(void) b;
		std::cout << GREEN  << " is (  B  )" << NORMAL << std::endl;
		return ;
	}
	catch (const std::bad_cast&) {}
	try
	{
		C& c= dynamic_cast<C&>(base);
		(void) c;
		std::cout << GREEN  << " is (  C  )" << NORMAL << std::endl;
		return ;
	}
	catch (const std::bad_cast&) {}
	std::cout << RED << "Unknown type!" << NORMAL << std::endl;
	
}

int main(void)
{
	Base *base = generate();

	std::cout << "Base pointer = "  << base << std::endl;
	test_generate_ptr(base);
	
	std::cout << "Base reference = " << &base << std::endl;
	test_generate_ref(*base);
	
	
	return (0);
	
}