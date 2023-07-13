/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:47:46 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/12 11:08:17 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include "contact.hpp"
#include <iomanip>
#include <sstream>
#include <iostream>

class	contact
{
	public:
		contact();
		void	set_Data(std::string type, std::string data);
		std::string	get_Data(std::string type);
		int	check_phonenum(std::string phone_num);
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone_num;
		std::string	darkest_secret;
};

#endif
