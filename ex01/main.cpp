/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:46:17 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/09 19:12:44 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdio.h>
#include "phonebook.hpp"
#include "contact.hpp"

int main(void)
{
	std::string	cmd;
	phonebook	pb;
	contact		new_con;


	while (1)
	{
		std::cout<<"put cmd : ";
		std::cin>>cmd;
		if (cmd.compare("ADD") == 0)
		{
			std::cin>>setName();
			std::cin>>setPhone_num();
			pb.addContact(new_con);
		}
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
