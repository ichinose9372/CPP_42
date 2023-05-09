/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:31:26 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/09 21:37:40 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void contact::setName(const	std::string &str)
{
	name = str;
}

void contact::setPhone_num(const std::string &num)
{
	phone_num = num;
}

std::string contact::getName() const {
	return name;
}

std::string contact::getPhoneNumber() const {
	return phone_num;
}
