/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:32:00 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/09 22:02:18 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
#include "contact.hpp"

void phonebook::addContact(const contact &new_contact)
{
	for (int i = 0; i < 8; i++)
	{
		if (contacts_[i].getName() == "")
		{
			contacts_[i] = new_contact;
			return;
		}
	}
	std::cout << "Cannot add new contact - phonebook is full." << std::endl;
}
