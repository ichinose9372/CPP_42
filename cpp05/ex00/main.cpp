/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:58:12 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/12 12:50:15 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "<<<<<<<<<<<<<< Test Constractor >>>>>>>>>>>>\n" << std::endl;
	try
	{
		Bureaucrat Bob;
		Bureaucrat Bobb("Bobb", 42);
		Bureaucrat Bobbb("Bobbb", 0);
		Bureaucrat Bobbbb("Bobbbb", -1);
		Bureaucrat Bobbbbb("Bobbbbb", 150);
		Bureaucrat Bobbbbbb("Bobbbbbb", 160);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "<<<<<<<<<<<<<< Test increment >>>>>>>>>>>>>>>>>\n" << std::endl;
	return (0);
}