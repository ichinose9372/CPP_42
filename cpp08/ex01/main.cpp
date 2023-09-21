/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:59:00 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/21 11:51:09 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	{
		std::cout << YELLOW << "------------- Correct Array --------------\n\n" << NORMAL;
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
		std::cout << YELLOW << "\n--------- Array Out of Bounds -----------\n\n" << NORMAL;
		Span sp(5);
	
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
		std::cout << YELLOW << "\n--------- invalid input (string) -----------\n\n" << NORMAL;
		Span sp(5);
		try
		{
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber('a');
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
		std::cout << YELLOW << "\n--------- int max and int min  -----------\n\n" << NORMAL;
		Span sp(2);
	
		try
		{
			sp.addNumber(-2147483648);
			sp.addNumber(2147483647);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (const std::exception& e) {
    	    std::cerr << e.what() << std::endl;
    	}
	}
	{
		std::cout << YELLOW << "\n------ Insufficient Data for Array Size -------\n\n" << NORMAL;
		Span sp(2);

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
		std::cout << YELLOW << "\n------------ Array same numbers -------------\n\n" << NORMAL;
		Span sp(5);

		try
		{
			sp.addNumber(8);
			sp.addNumber(8);
			sp.addNumber(4);
			sp.addNumber(4);
			sp.addNumber(0);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;			
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << YELLOW << "\n------------- Smallest Array Size ---------------\n\n" << NORMAL;
		Span sp(2);

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
		std::cout << YELLOW << "\n----------- Over 10,000 Numbers -----------------\n\n" << NORMAL;
		Span sp(12000);
		try
		{
			std::vector<int>::iterator it = sp.begin();
			std::vector<int>::iterator ite = sp.end();
			sp.addNumber(it, ite);
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