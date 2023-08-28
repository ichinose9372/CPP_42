/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:20:22 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/08/28 15:08:41 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::~ScalarConverter()
{}

int ScalarConverter::desicion_type(void)
{
	if (this->literal.length() == 1 && !isdigit(this->literal[0]))
		return (CHAR);
	else if (this->literal == "nan" || this->literal == "nanf")
		return (UNKNOWN);
	else if (this->literal == "inf" || this->literal == "+inf" || this->literal == "-inf"
			|| this->literal == "inff" || this->literal == "+inff" || this->literal == "-inff")
		return (UNKNOWN);
	else if (this->literal.find('.') != std::string::npos)
	{
		if (this->literal.find('f') != std::string::npos)
			return (FLOAT);
		else
			return (DOUBLE);
	}
	else
		return (INT);
}

void ScalarConverter::print_all(int type)
{
	to_char(type);
	// to_int()
	// to_float()
	// to_double()
}

void ScalarConverter::to_char(int type)
{
	char c;
	if (type == CHAR)
		c = literal[0];
	else if (type == INT)
		c = static_cast<char>(stoi(literal));
	else if (type == FLOAT)
		c = static_cast<char>(stof(literal));
	else if (type == DOUBLE)
		c = static_cast<char>(stod(literal));
	else 
		c = '\0';
	if (c < 0 || c > 127)
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(c))
		std::cout << "char: Non displayable" << std::endl;
	else 
		std::cout << "char: '" << c << "'" << std::endl; 
	
}

void ScalarConverter::convert(char *argv)
{
	this->literal = *argv;
	int type = desicion_type();
	print_all(type);
}