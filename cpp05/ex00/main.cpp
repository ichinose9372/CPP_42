/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:58:12 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/29 12:19:16 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
   try
   {
   		Bureaucrat example("John",2);
   		example.incrementGrade();
   		std::cout << example << std::endl;
   		example.incrementGrade();
   		std::cout << example << std::endl;
   		example.incrementGrade();
   		std::cout << example << std::endl;
   		example.incrementGrade();
   		std::cout << example << std::endl;
   }
   catch(const std::exception& e)
   {
		std::cerr << e.what() << '\n';
   }
	return (0);
}