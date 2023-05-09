/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:16:06 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/09 19:14:10 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class phonebook
{
	public:
		phonebook();
		void	addContact(const contact &new_contact);
		void	printContact() const;
	private:
		contact contacts_[8];
		int num_contacts_;

};

#endif
