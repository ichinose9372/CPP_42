/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:31:26 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/11 17:11:58 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact() : 
first_name(""), last_name(""), 
nick_name(""), phone_num(""), 
darkest_secret("")
{}


void contact::set_Data(std::string type, std::string data)
{
	if (type == "first_name")
		first_name = data;
	else if (type == "last_name")
		last_name = data;
	else if (type == "nick_name")
		nick_name = data;
	else if (type == "phone_num")
		phone_num = data;
	else if (type == "darkest_secret")
		darkest_secret = data;
}

std::string contact::get_Data(std::string type)
{
	if (type == "first_name")
		return (first_name);
	else if (type == "last_name")
		return (last_name);
	else if (type == "nick_name")
		return (nick_name);
	else if (type == "phone_num")
		return (phone_num);
	else if (type == "darkest_secret")
		return (darkest_secret);
	else
		return ("");
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
