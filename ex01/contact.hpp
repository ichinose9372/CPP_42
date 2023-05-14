/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:47:46 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/14 23:55:41 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <chrono>

class	contact
{
	public:
		contact();
		void setName(const std::string &f_name, const std::string &l_name, const std::string &n_name);
		void setPhone_num(const std::string &str);
		void setDarkest_secret(const std:: string &str);
		void setTimestamp();
		std::string getFirst_name() const;
		std::string getLast_name() const;
		std::string getNick_name() const;
		std::string getPhoneNumber() const;
		std::string getDarkesr_secret() const;
		std::chrono::system_clock::time_point	getTimestamp()const;
		int	check_phonenum(std::string phone_num);
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone_num;
		std::string	darkest_secret;
		std::chrono::system_clock::time_point timestamp;
};

#endif
