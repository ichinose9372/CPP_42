/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:58:12 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/29 12:39:11 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main(void)
{
	{
		std::cout << "------------------constractor---------------------"<< std::endl;
		try 
		{
        	Bureaucrat bureaucrat1("John", 150);
        	Bureaucrat bureaucrat2("Alice", 6);
	
        	Form form1("Form1", 5, 2);
        	Form form2("Form2", 10, 1);
	
        	std::cout << bureaucrat1 << std::endl;
        	std::cout << bureaucrat2 << std::endl;
	
        	std::cout << form1 << std::endl;
        	std::cout << form2 << std::endl;
	
        	bureaucrat1.signForm(form1);
        	bureaucrat2.signForm(form1);
			bureaucrat1.signForm(form2);
        	bureaucrat2.signForm(form2);
	
        	std::cout << form1 << std::endl;
        	std::cout << form2 << std::endl;
    	}
		catch (std::exception& e) 
		{
        	std::cout << "Exception: " << e.what() << std::endl;
    	}
	}
	return (0);
}