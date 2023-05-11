/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:47:46 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/11 12:48:32 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class	contact
{
	public:
		contact();
		void setName(const std::string &f_name, const std::string &l_name, const std::string &n_name);
		void setPhone_num(const std::string &str);
		void setDarkest_secret(const std:: string &str);
		std::string getFirst_name() const;
		std::string getLast_name() const;
		std::string getNick_name() const;
		std::string getPhoneNumber() const;
	private:
		std::string first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone_num;
		std::string	darkest_secret;
};

#endif
