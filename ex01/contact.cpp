/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:31:26 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/09 17:37:13 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void contact::setName(const	std::string &name)
{
	name_ = name;
}

void contact::setPhone_num(const std::string &phone_num)
{
	phone_num_ = phone_num;
}

std::string Contact::getName() const {
	return name_;
}

std::string Contact::getPhoneNumber() const {
	return phone_num_;
}
