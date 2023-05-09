/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:47:46 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/09 18:35:10 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class	contact
{
	public:
		void setName(const std::string &name);
		void setPhone_num(const std::string &phone_num);
		std::string getName() const;
		std::string getPhoneNumber() const;
	private:
		std::string name_;
		std::string	phone_num_;
};

#endif
