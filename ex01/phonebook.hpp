/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:16:06 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/09 17:28:29 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_NUMBER_HPP
#define PHONE_NUMBER_HPP

#include <string>

class phonebook
{
	private:
		phonebook()
		void	addContact(const contact &new_contact, const contct &new_phone_num)
		void	ptinfCntact() const;
	public:
		contact contacts_[8];
		int num_contacts_;

};

#endid
