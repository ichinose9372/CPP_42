/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:59:00 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/18 14:58:12 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	{
		std::cout << "-------------corect array--------------\n";
		Span sp = Span(5);
	
		try
		{
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (const std::exception& e) {
    	    std::cerr << e.what() << std::endl;
    	}
	}
	{
		std::cout << "---------array overt index --------------\n";
		Span sp = Span(5);
	
		try
		{
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			sp.addNumber(99);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (const std::exception& e) {
    	    std::cerr << e.what() << std::endl;
    	}
	}

	{
		std::cout << "-----------arrya less index ----------------\n";
		Span sp = Span(2);

		try
		{
			sp.addNumber(8);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;			
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "----------corect array --------------------\n";
		Span sp = Span(2);

		try
		{
			sp.addNumber(8);
			sp.addNumber(4);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;			
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "------over 10k numbers---------------------\n";
		Span sp = Span(12000);
		try
		{
			sp.addNumber(begin(),end());
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;	
		}
		catch(const std::exception& e)
		{
			std::cerr<< e.what() << std::endl;
		}
		
	}
	return (0);
}