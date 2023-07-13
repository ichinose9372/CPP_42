/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:16:06 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/12 11:04:34 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class phonebook
{
	public:
		void	addContact(const contact &new_contact);
		void	printContact();
		void	printContact_num(int num);
		int 	choose_contact(void);
		void	add(void);
		void	input(std::string type, std::string data, contact &new_contact);
		void	all_view(std::string f_name, std::string l_name, std::string n_name, std::string phone_num, std::string d_secret);
	private:
		contact arry[8];
};

#endif
