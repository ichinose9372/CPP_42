/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:59:00 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/22 14:48:56 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	{
		//copy constructor and assignation operator
		std::cout << YELLOW << "------------- Copy Constructor and Assignation Operator --------------\n\n" << NORMAL;
		Span sp(5);
		std::cout << "sp size: " << sp.getSize() << std::endl;
		Span sp2(sp);
		std::cout << "sp2 size: " << sp.getSize() << std::endl;
		Span sp3(1);
		sp3 = sp;
		std::cout << "sp3 size: " << sp.getSize() << std::endl;
	}
	
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
		Span sp(3);
	
		try
		{
			sp.addNumber(-2147483648);
			sp.addNumber(2147483647);
			sp.addNumber(-1);
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
		std::cout << YELLOW << "\n-------------  arryay is not full but over 2 -----------\n\n" << NORMAL;
		Span sp(5);
		try
		{
			sp.addNumber(8);
			sp.addNumber(0);
		
			std::cout << sp.shortestSpan() << std::endl;
			std	::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	{
		std::cout << YELLOW << "\n----------- Over 10,000 Numbers -----------------\n\n" << NORMAL;
		Span sp(12000);
		// sp_size = 0;
		std::vector<int> vec;
		for(int i = 0; i < 12000; ++i)
		{
			vec.push_back(i * 2);
		}
		std::vector<int>::iterator it = vec.begin();
		std::vector<int>::iterator ite = vec.end();
		try
		{
			sp.addNumber(it, ite);
			std::cout << sp.shortestSpan() << std::endl;
			std	::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr<< e.what() << std::endl;
		}
		
	}

	std::cout << std::endl;
	return (0);
}