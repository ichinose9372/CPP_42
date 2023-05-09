/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:47:46 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/09 21:53:17 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class	contact
{
	public:
		contact() : name(""), phone_num("") {}
		void setName(const std::string &str);
		void setPhone_num(const std::string &num);
		std::string getName() const;
		std::string getPhoneNumber() const;
	private:
		std::string name;
		std::string	phone_num;
};

#endif
