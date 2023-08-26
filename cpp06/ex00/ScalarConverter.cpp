/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:20:22 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/08/25 13:33:13 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(std::string str) : _str(str)
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    *this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    if (this != &other)
    {
        this->_str = other._str;
    }
    return (*this);
}

void ScalarConverter::printable(void)
{
    print_char();
    print_int();
    print_float();
    print_double();
}

void ScalarConverter::print_char(void)
{
    
}

void ScalarConverter::print_int(void)
{

}

void ScalarConverter::print_float(void)
{

}

void ScalarConverter::print_double(void)
{

}