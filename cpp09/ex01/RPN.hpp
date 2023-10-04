/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:36:07 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/10/03 19:17:26 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <stack>
#include <string>
#include <sstream>
#include <iostream>
#include <stdexcept>
#include <exception>

#define RED "\x1b[31m"
#define NORMAL "\033[0m"
#define GREEN "\x1b[32m" 
#define YELLOW "\x1b[33m"


class RPN
{
	public:
		RPN();
		RPN(const RPN &other);
		RPN(std::string literal);
		RPN& operator=(const RPN &other);
		~RPN();
		class My_exception : public std::exception
		{
			virtual const char * what() const throw();				
		};
		
	private:
		std::stack<unsigned int> data;
};

#endif