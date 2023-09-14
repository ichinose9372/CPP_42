/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 07:31:27 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/14 14:11:04 by yichinos         ###   ########.fr       */
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

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << GREEN << " This is an A object." << NORMAL << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << GREEN << " This is an B object." << NORMAL << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << GREEN << " This is an C object." << NORMAL << std::endl;
	else 
		std::cout << RED << "Unknown type!" << NORMAL << std::endl;
}

void identify(Base& p)
{	
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void) a;
		std::cout << GREEN << " This is an A object." << NORMAL << std::endl;
		return ;
	}
	catch (const std::bad_cast&) {}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void) b;
		std::cout << GREEN  << " This is an B object." << NORMAL << std::endl;
		return ;
	}
	catch (const std::bad_cast&) {}
	try
	{
		C& c= dynamic_cast<C&>(p);
		(void) c;
		std::cout << GREEN  << " This is an C object." << NORMAL << std::endl;
		return ;
	}
	catch (const std::bad_cast&) {}
	std::cout << RED << "Unknown type!" << NORMAL << std::endl;
	
}

int main(void)
{
	Base *base = generate();

	std::cout << "Base pointer = "  << base << std::endl;
	identify(base);
	
	std::cout << "Base reference = " << &base << std::endl;
	identify(*base);

	return (0);
	
}