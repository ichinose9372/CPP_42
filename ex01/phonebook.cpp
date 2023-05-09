/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:32:00 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/09 19:15:03 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
#include "contact.hpp"

phonebook::phonebook() : num_contacts_(0) {}

void phonebook::addContact(const contact &new_contact)
{
	if (num_contacts_ > 8)
	{
		std::cout<<"It's FULL"<< std::endl;
		return ;
	}
	contact[num_contacts_] = new_contact;
	num_contacts_++;
}

void phonebook::printContact() const
{
	int	i;
	for(i = 0; i < num_contacts_; i++)
	{
		std::cout << "NAME: " << contacts_[i].getName() << ", num: " << contacts_[i].getPhoneNumber() << std::endl;
	}
}
