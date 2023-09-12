/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:36:07 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/12 18:00:14 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <stack>
#include <string>
#include <sstream>
#include <iostream>


class RPN
{
	public:
		RPN();
		RPN(const RPN &other);
		RPN(std::string literal);
		RPN& operator=(const RPN &other);
		~RPN();
	private:
		std::stack<int> data;
};

#endif