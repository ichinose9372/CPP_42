/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:20:22 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/08/26 18:26:47 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(std::string str) : str(str)
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
		this->str = other.str;
	}
	return (*this);
}

// int ScalarConverter::desicion_type(void)
// {
// 	if (this->str.length() == 1 && !isdigit(this->str[0]))
// 		return (CHAR);
// 	else if (this->str == "nan" || this->str == "nanf")
// 		return (UNKNOWN);
// 	else if (this->str == "inf" || this->str == "+inf" || this->str == "-inf"
// 			|| this->str == "inff" || this->str == "+inff" || this->str == "-inff")
// 		return (UNKNOWN);
// 	else if (this->str.find('.') != std::string::npos)
// 	{
// 		if (this->str.find('f') != std::string::npos)
// 			return (FLOAT);
// 		else
// 			return (DOUBLE);
// 	}
// 	else
// 		return (INT);
// }

char ScalarConverter::to_char(void)
{
	char c;

	if (this->str.length() == 1 && !isdigit(this->str[0]))
		c = this->str[0];
	else
		c = static_cast<char>(this->to_int());
	if (isprint(c))
		return (c);
	else
		return ('.');
}

int ScalarConverter::to_int(void)
{
	int i;

	if (this->str == "nan" || this->str == "nanf")
		return (0);
	else if (this->str == "inf" || this->str == "+inf" || this->str == "inff" || this->str == "+inff")
		return (0);
	else if (this->str == "-inf" || this->str == "-inff")
		return (0);
	else if (this->str.length() == 1 && !isdigit(this->str[0]))
		return (static_cast<int>(this->str[0]));
	// else if (this->str.find('.') != std::string::npos)
	// {
	// 	if (this->str.find('f') != std::string::npos)
	// 		return (static_cast<int>(this->to_float()));
	// 	else
	// 		return (static_cast<int>(this->to_double()));
	// }
	else
	{
		i = std::stoi(this->str);
		return (i);
	}
}



void ScalarConverter::print_all(void)
{
	std::cout << "char: " << this->to_char() << std::endl;
	std::cout << "int: " << this->to_int() << std::endl;
	std::cout << "float: " << this->to_float() << std::endl;
	std::cout << "double: " << this->to_double() << std::endl;
}