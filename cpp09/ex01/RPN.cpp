/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:48:07 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/11 17:18:43 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(std::string literal)
{
    std::istringstream stream(literal);
    std::string token;
    while (std::getline(stream, token, ' '))
    {
        if (isdigit(token[0]) || (token[0] == '-' && token.length() > 1 && isdigit(token[1]))) 
            data.push(std::stoi(token));
    }
}

RPN::RPN(const RPN &other) : data(other.data){}

RPN& RPN::operator=(const RPN &other)
{
    if (this != &other)
    {
        this->data = other.data;
    }
    return *this;
}

RPN::~RPN(){}



