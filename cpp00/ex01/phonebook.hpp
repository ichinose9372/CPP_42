/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:16:06 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/09 22:13:07 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class phonebook
{
	public:
		void	addContact(const contact &new_contact);
		int		printContact();
		void	printContact_num(std::string cmd);
		int		add_func(phonebook &pb);
		int		inputandcheck(std::string &name);
		void	all_view(std::string f_name, std::string l_name, std::string n_name, std::string phone_num, std::string d_secret);
	private:
		contact arry[8];
};

#endif
