/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:20:22 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/08/28 16:08:26 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::~ScalarConverter()
{}

int ScalarConverter::desicion_type(std::string literal)
{
	if (literal.length() == 1 && !isdigit(literal[0]))
		return (CHAR);
	else if (literal == "nan" || literal == "nanf")
		return (UNKNOWN);
	else if (literal == "inf" || literal == "+inf" || literal == "-inf"
			|| literal == "inff" || literal == "+inff" || literal == "-inff")
		return (UNKNOWN);
	else if (literal.find('.') != std::string::npos)
	{
		if (literal.find('f') != std::string::npos)
			return (FLOAT);
		else
			return (DOUBLE);
	}
	else
		return (INT);
}

void ScalarConverter::print_all(int type, std::string literal)
{
	to_char(type, literal);
	to_int(type, literal);
	to_float(type, literal);
	to_double(type, literal);
}

void ScalarConverter::to_char(int type, std::string literal)
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
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
		
	if (!isprint(c))
		std::cout << "char: Non displayable" << std::endl;
	else 
		std::cout << "char: '" << c << "'" << std::endl; 
}

void ScalarConverter::to_int(int type, std::string literal)
{
	int i;

	if (type == CHAR)
		i = static_cast<int>(literal[0]);
	else if (type == INT)
		i = stoi(literal);
	else if (type == FLOAT)
		i = static_cast<int>(stof(literal));
	else if (type == DOUBLE)
		i = static_cast<int>(std::stod(literal));
	else 
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	std::cout <<"int: " << i << std::endl;
}

void ScalarConverter::to_float(int type, std::string literal)
{
	float f;

	if (type == CHAR)
		f = static_cast<float>(literal[0]);
	else if (type == FLOAT)
		f = stof(literal);
	else if (type == DOUBLE)
		f = static_cast<float>(std::stod(literal));
	else if (type == INT)
		f = static_cast<float>(stoi(literal));
	else 
	{
		std::cout << "float: nanf" << std::endl;
		return ;
	}
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
}

void ScalarConverter::to_double(int type, std::string literal)
{
	double d;

	if (type == CHAR)
		d = static_cast<double>(literal[0]);
	else if (type == INT)
		d = static_cast<double>(stoi(literal));
	else if (type == FLOAT)
		d = static_cast<double>(stof(literal));
	else if (type == DOUBLE)
		d = std::stod(literal);
	else 
	{
		std::cout << "double: nan" << std::endl;
		return ;
	}
	std::cout << "doubel: " << std::fixed << std::setprecision(1) << d << std::endl;
}

void ScalarConverter::convert(char *argv)
{
	std::string literal = argv;
	int type = desicion_type(literal);
	print_all(type, literal);
}