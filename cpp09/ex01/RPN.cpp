/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:48:07 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/10/02 10:24:43 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

int calucration(int num1, int num2, std::string &token)
{
	if (token[0] == '+' )
	{
		return (num2 + num1);
	}
	else if (token[0] == '-')
	{
		return (num2 - num1);
	}
	else if (token[0] == '*')
	{
		return (num2 * num1);
	}
	else
	{
		if (num1 != 0)
			return (num2 / num1);
		else
			throw std::invalid_argument("Division by Zero");
	}
}

RPN::RPN(std::string literal)
{
	std::istringstream stream(literal);
	std::string token;
	while (std::getline(stream, token, ' '))
	{
		if (isdigit(token[0]) || (token[0] == '-' && token.length() > 1 && isdigit(token[1]))) 
		{
			data.push(std::stoi(token));
		} 	
		else if (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/')
		{
			int num1 = data.top();
			data.pop();
			int num2 = data.top();
			data.pop();
			try
			{
				data.push(calucration(num1, num2, token));
			}
			catch(const std::invalid_argument& e)
			{
				while (!data.empty()) 
				{
					data.pop();
				}
				throw std::invalid_argument("Invaid argument ( Devion by Zero )\n");
			}
		}
		else if (token [0] == '(' || token[0] == '(' || token[1] == ')' || token[1] == ')') 
		{
			throw std::invalid_argument("Invalid argument \n");
		}
	}
	if (data.size() > 1) 
	{
		std::cout << "Error:  " << data.size() << std::endl;
	}
	else 
	{
		std::cout << data.top() << std::endl;
	}
}

RPN::RPN(const RPN &other) 
{
	*this = other;
}

RPN& RPN::operator=(const RPN &other)
{
	if (this != &other)
	{
		this->data = other.data;
	}
	return *this;
}

RPN::~RPN(){}


const char* RPN::My_exception::what() const throw() {
	return "ERROR : Devion by zero";
}
