/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:31:26 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/09 21:30:36 by ichinoseyuu      ###   ########.fr       */
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

std::string contact::getFirst_name() const
{
	return first_name;
}

std::string contact::getLast_name() const
{
	return last_name;
}

std::string contact::getNick_name() const
{
	return nick_name;
}

std::string contact::getPhoneNumber() const
{
	return phone_num;
}

std::string contact::getDarkesr_secret() const
{
	return darkest_secret;
}

contact::contact() : first_name(""), last_name(""), nick_name(""), phone_num(""), darkest_secret("")
{
	return ;
}

int contact::check_phonenum(std::string phone_num)
{
	int size = phone_num.size();

	for (int i = 0; i < size; i++)
	{
		if (!isdigit(phone_num[i]))
		{
			return 0;
		}
	}
	return 1;
}
