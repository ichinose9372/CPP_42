/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:58:12 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/23 15:41:33 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "------------------constractor---------------------"<< std::endl;
	Bureaucrat b1("b1", 1);
	Bureaucrat b2("b2", 150);
	Bureaucrat b3("b3", -1);
	Bureaucrat b4("b4", 151);
	std::cout << "--------------------init----------------------"<< std::endl;
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;
	std::cout << b4 << std::endl;
	std::cout << b1.getGrade() << std::endl;
	std::cout << b2.getGrade() << std::endl;
	std::cout << b3.getGrade() << std::endl;
	std::cout << b4.getGrade() << std::endl;
	std::cout << "-------------------destructor---------------------"<< std::endl;
	
}