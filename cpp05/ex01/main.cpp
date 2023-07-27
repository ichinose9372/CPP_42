/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:58:12 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/26 13:12:26 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	{
		std::cout << "------------------constractor---------------------"<< std::endl;
		Bureaucrat b1("b1", 2);
		Bureaucrat b2("b2", 149);
		Bureaucrat b3("", 100);
		std::cout << "--------------------init----------------------"<< std::endl;
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;
		std::cout << b3 << std::endl;
		std::cout << b1.getGrade() << std::endl;
		std::cout << b2.getGrade() << std::endl;
		std::cout << b3.getGrade() << std::endl;
		std::cout << "-------------------increment---------------------"<< std::endl;
		b1.incrementGrade();
		b2.incrementGrade();
		b3.incrementGrade();
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;
		std::cout << b3 << std::endl;
		std::cout << "-------------------decrement---------------------"<< std::endl;
		b1.decrementGrade();
		b2.decrementGrade();
		b3.decrementGrade();
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;
		std::cout << b3 << std::endl;
		std::cout << "-------------------destructor---------------------"<< std::endl;
	}
	//例外発生ケース
	{
		
	}
	return (0);
}