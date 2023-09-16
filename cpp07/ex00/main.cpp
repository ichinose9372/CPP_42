/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:16:43 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/14 14:35:28 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"
#include <iostream>

int main( void )
{
	{
		std::cout << YELLOW << " Test case ( int and string) " << NORMAL<< std::endl;
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
		std::cout << "-----------------------------------------" << std::endl;
	}
	{
		std::cout << YELLOW << " Test case ( double ) " << NORMAL <<std::endl;
		double a = 42.42;
		double b = 84.8444444444444444;
		std::cout << "initialize  a = " << a << " b = " << b << std::endl;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::cout << "-----------------------------------------" << std::endl;
	}
	{
		std::cout << YELLOW << " Test case ( float ) " << NORMAL <<std::endl;
		float a = 42.42;
		float b = 21.21;
		std::cout << "initialize  a = " << a << " b = " << b << std::endl;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::cout << "-----------------------------------------" << std::endl;
	}
	{
		//double and float is unable 
		// std::cout << YELLOW << " Test case ( float and double ) " << std::endl;
		// float a = 42.42;
		// double b = 55.55;
		// ::swap( a, b );
		// std::cout << "a = " << a << ", b = " << b << std::endl;
		// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		// std::cout << "-----------------------------------------" << std::endl;	
	}
	return 0;
}