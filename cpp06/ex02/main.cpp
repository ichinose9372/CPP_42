/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 07:31:27 by yichinos          #+#    #+#             */
/*   Updated: 2023/08/28 13:12:57 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>


Base *generate(void)
{
	int random = std::rand() % 3;
	switch (random)
	{
		case 0 :
			std::cout << "creat   A " << std::endl;
			return new A();
		case 1 :
			std::cout << "creat   B " << std::endl;
			return new B();
		default:
			std::cout << "creat   C " << std::endl;
			return new C();
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "result  A" << std::endl;
	else if (dynamic_cast<B*>(p)) 
		std::cout << "result  B" << std::endl;
	else if (dynamic_cast<C*>(p)) 
		std::cout << "result  C" << std::endl;
	else 
		std::cout << "Unknown class" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A &tmp = dynamic_cast<A&>(p);
		(void)tmp;
		std::cout << "result  A " << std::endl;
		return ;
	}
	catch(std::bad_cast){}
	try
	{
		B &tmp = dynamic_cast<B&>(p);
		(void)tmp;
		std::cout << "result  B " <<std::endl;
		return ;
	}
	catch(std::bad_cast){}
	try
	{
		C &tmp = dynamic_cast<C&>(p);
		(void)tmp;
		std::cout << "result  C " << std::endl;
		return ;
	}
	catch(std::bad_cast){}
	std::cout << "Unknown class" << std::endl;
}

int main(void)
{
	{
		std::srand(static_cast<unsigned int>(std::time(0)));
		Base *ptr[3];
		for (int i = 0; i < 3; i++)
		{
			ptr[i] = generate();
			identify(ptr[i]);
		}
		for (int i = 0; i < 3; i++)
		{
			delete ptr[i];
		}
	}
	{
		std::srand(static_cast<unsigned int>(std::time(0)));
		Base *ptr[3];
		for (int i = 0; i < 3; i++)
		{
			ptr[i] = generate();
			identify(*ptr[i]);
		}
		for (int i = 0; i < 3; i++)
		{
			delete ptr[i];
		}
	}
	
	return (0);
	
}