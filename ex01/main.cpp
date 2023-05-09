/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:46:17 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/09 14:42:33 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdio.h>

int main(void)
{
	std::string	cmd;

	while (1)
	{
		std::cout<<"put cmd : ";
		std::cin>>cmd;
		if (cmd.compare("ADD") == 0)
			std::cout<<cmd<<std::endl;
		else if (cmd.compare("SEARCH") == 0)
			std::cout<<"SEARCH"<<std::endl;
		else if (cmd.compare("EXIT") == 0)
		{
			std::cout<<"EXIT"<<std::endl;
			break ;
		}
	}
	return (0);
}
