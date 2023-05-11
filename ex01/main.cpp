/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:46:17 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/11 15:14:17 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdio.h>
#include "phonebook.hpp"
#include "contact.hpp"


void	add_func(phonebook &pb)
{
	contact		n_contact;
	std::string	f_name,l_name,n_name,phone_num,d_secret;

	std::cout<<"FIRSTNAME : ";
	std::cin>>f_name;
	std::cout<<"LASTNAME : ";
	std::cin>>l_name;
	std::cout<<"NICKTNAME : ";
	std::cin>>n_name;
	std::cout<<"TEL : ";
	std::cin>>phone_num;
	std::cout<<"SECRET>< : ";
	std::cin>>d_secret;
	n_contact.setName(f_name,l_name,n_name);
	n_contact.setPhone_num(phone_num);
	n_contact.setDarkest_secret(d_secret);
	pb.addContact(n_contact);
}

int main(void)
{
	std::string	cmd;
	phonebook	pb;

	while (1)
	{
		std::cout<<"put cmd : ";
		std::cin>>cmd;
		if (cmd.compare("ADD") == 0)
			add_func(pb);
		else if (cmd.compare("SEARCH") == 0)
		{
			pb.printContact();
			std::cout<<"\n\nどの番号を表示しますか？ : ";
			std::cin>>cmd;
			pb.printContact_num(cmd);
		}
		else if (cmd.compare("EXIT") == 0)
		{
			std::cout<<"EXIT"<<std::endl;
			break ;
		}
	}
	return (0);
}
