/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:46:17 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/09 22:19:48 by ichinoseyuu      ###   ########.fr       */
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
	contact		new_contact;
	std::string name, phone_num;

	while (1)
	{
		std::cout<<"put cmd : ";
		std::cin>>cmd;
		if (cmd.compare("ADD") == 0)
		{
			std::cout<<"NAME :";
			std::cin>>name;
			std::cout<<"TEL : ";
			std::cin>>phone_num;
			new_contact.setName(name);
			new_contact.setPhone_num(phone_num);
			pb.addContact(new_contact);
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
