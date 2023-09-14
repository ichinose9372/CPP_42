/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:20:22 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/14 14:04:39 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::~ScalarConverter()
{}

void print_char(char c)
{
	if (c < 32 || c > 126)
	{
		std::cout << "char: Non displayable" << std::endl;
		return ;
	}
	std::cout << "char: '" << c << "'" <<std::endl;	
}

void unknown_print(std::string literal)
{
	if (literal == "nan")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan " << std::endl;
	}
	else if (literal == "nanf")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl; 
	}
	else if (literal == "inff")
	{
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
	}
	else if (literal == "+inff")
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (literal == "-inff")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else 
	{
		std::cout << "float: " << literal << std::endl;
		std::cout << "double: " << literal << std::endl;
	}
}

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
	switch (type)
	{
		case 0:
		{
			char_to_other(literal);
			break;
		}
		case 1:
		{
			int_to_other(literal);
			break;
		}
		case 2:
		{
			float_to_other(literal);
			break;
		}	
		case 3:
		{
			double_to_other(literal);
			break;
		}
		case 4:
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			unknown_print(literal);
			break;
		}
	}
	
}



void ScalarConverter::char_to_other(std::string literal)
{
	char c = literal[0];
	int i = static_cast<int>(c);
	float f = static_cast<float>(c);
	double d = static_cast<double>(c);
	
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

void ScalarConverter::int_to_other(std::string literal)
{
	int i;
	char c;
	double d;
	float f;
	
	try
	{
		c = static_cast<char>(std::stoi(literal));
		i = static_cast<int>(std::stoi(literal));
		f = static_cast<float>(std::stoi(literal));
		d = static_cast<double>(std::stoi(literal));
	}
	catch(const std::invalid_argument)
	{
		std::cerr << "Error: invalid argument" << std::endl;
		return ;
	}
	catch(const std::out_of_range)
	{
		std::cerr << "Error: out of range" << std::endl;
		return ;
	}
	
	print_char(c);
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

void ScalarConverter::float_to_other(std::string literal)
{
	int i;
	char c;
	double d;
	float f;

	try
	{
		c = static_cast<char>(std::stof(literal));
		i = static_cast<int>(std::stof(literal));
		f = static_cast<float>(std::stof(literal));
		d = static_cast<double>(std::stof(literal));
	}
	catch(const std::invalid_argument)
	{
		std::cerr << "Error: invalid argument" << std::endl;
		return ;
	}
	catch(const std::out_of_range)
	{
		std::cerr << "Error: out of range" << std::endl;
		return ;
	}
	print_char(c);
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	
}

void ScalarConverter::double_to_other(std::string literal)
{
	int i;
	char c;
	double d;
	float f;

	try
	{
		c = static_cast<char>(std::stod(literal));
		i = static_cast<int>(std::stod(literal));
		f = static_cast<float>(std::stod(literal));
		d = static_cast<double>(std::stod(literal));
	}
	catch(const std::invalid_argument)
	{
		std::cerr << "Error: invalid argument" << std::endl;
		return ;
	}
	catch(const std::out_of_range)
	{
		std::cerr << "Error: out of range" << std::endl;
		return ;
	}
	print_char(c);
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

void ScalarConverter::convert(char *argv)
{
	std::string literal = argv;
	int type = desicion_type(literal);
	print_all(type, literal);
}