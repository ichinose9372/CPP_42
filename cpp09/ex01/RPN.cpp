/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:48:07 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/10/04 13:22:35 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

int calucration(int num1, int num2, char token)
{
	long long result;

	switch (token)
	{
		case '+':
			result = static_cast<long long>(num2) + static_cast<long long>(num1);
			break;
		case '-':
			 result = static_cast<long long>(num2) - static_cast<long long>(num1);
			break;
		case '*':
			 result = static_cast<long long>(num2) * static_cast<long long>(num1);
			break;
		case '/':
			if (num1 != 0)
				 result = static_cast<long long>(num2) / static_cast<long long>(num1);
			else
				throw std::invalid_argument("Division by Zero");
			break;
		default:
			throw std::invalid_argument("Invalid operator");
	}
	if (result > INT_MAX)
		throw std::overflow_error(" overflow ");
	else if (result < INT_MIN)
		throw std::underflow_error(" underflow");
	else 
		return static_cast<int>(result);
}


RPN::RPN(std::string literal)
{
	std::istringstream stream(literal);
	std::string token;
	while (std::getline(stream, token, ' '))
	{
		for (size_t i = 0; token[i]; i++)
		{
			if (token[i] == '.')
				throw std::invalid_argument(" not integer \n");
			else if (token[i] == '(' || token[i] == ')')
				throw std::invalid_argument("Error \n");
		}
		if (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/')
		{
			int num1 = data.top();
			data.pop();
			int num2 = data.top();
			data.pop();
			data.push(calucration(num1, num2, token[0]));
		}
		else 
		{
			int num;
			std::istringstream(token) >> num;
			if (num >= 10)
				throw std::invalid_argument(" over 10 \n");
			data.push(num);
		}
	}
	if (data.size() > 1) 
		throw std::length_error("data_size over \n");
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

