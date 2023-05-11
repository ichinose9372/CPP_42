/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:32:00 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/11 17:03:20 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
#include "contact.hpp"
#include <iomanip>

void phonebook::addContact(const contact &new_contact)
{
	int	old_index;
	int	i;
	for (i = 0; i < 8; i++)
	{
		if (arry[i].getFirst_name() == "")
		{
			arry[i] = new_contact;
			return;
		}
	}
	std::cout << "Cannot add new contact - phonebook is full." << std::endl;
	old_index = 0;
	for (i = 1; i < 8; i++)
	{
		if (arry[i].getFirst_name() != "" && arry[i].getTimestamp() < arry[old_index].getTimestamp())
		{
			old_index = i;
		}
	}
	arry[old_index] = new_contact;
}

void phonebook::printContact()
{
	int	i;
	
	for(i = 0; i < 8; i++)
	{
		if (arry[i].getFirst_name() == "")
			return ;
		std::cout<<std::setw(10)<<std::right<<i + 1<<'|';
		std::cout<<std::setw(10)<<std::right<<(arry[i].getFirst_name().size()>10 ? arry[i].getFirst_name().substr(0,9)+"." : arry[i].getFirst_name())<<'|';
		std::cout<<std::setw(10)<<std::right<<(arry[i].getLast_name().size()>10 ? arry[i].getLast_name().substr(0,9)+"." : arry[i].getLast_name())<<'|';
		std::cout<<std::setw(10)<<std::right<<(arry[i].getNick_name().size()>10 ? arry[i].getNick_name().substr(0,9)+"." : arry[i].getNick_name())<<'|';
		std::cout<<std::setw(10)<<std::right<<(arry[i].getPhoneNumber().size()>10 ? arry[i].getPhoneNumber().substr(0,9)+"." : arry[i].getPhoneNumber())<<'\n';
	}
}

void phonebook::printContact_num(std::string cmd)
{
	int	i;
	for(i = 0; i < 8; i++)
	{
		if (i + 1 == stoi(cmd))
		{
			std::cout<<"FIRSTNAME : "<<arry[i].getFirst_name()<<'\n';
			std::cout<<"LASTNAME  : "<<arry[i].getLast_name()<<'\n';
			std::cout<<"NICKNAME  : "<<arry[i].getNick_name()<<'\n';
			std::cout<<"TEL       : "<<arry[i].getPhoneNumber()<<'\n';
		}
	}
}
