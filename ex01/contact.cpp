/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:31:26 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/11 13:26:08 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void contact::setName(const std::string &f_name, const std::string &l_name, const std::string &n_name)
{
	first_name = f_name;
	last_name = l_name;
	nick_name = n_name;
}

void contact::setPhone_num(const std::string &str)
{
	phone_num = str;
}

void contact::setDarkest_secret(const std::string &str)
{
	darkest_secret = str;
}

std::string contact::getFirst_name() const {
	return first_name;
}

std::string contact::getLast_name() const {
	return last_name;
}

std::string contact::getNick_name() const {
	return nick_name;
}

std::string contact::getPhoneNumber() const {
	return phone_num;
}

contact::contact()
{
	setName("","","");
	setPhone_num("");
	setDarkest_secret("");
}
