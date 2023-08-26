/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:20:22 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/08/26 19:24:48 by yichinos         ###   ########.fr       */
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

int ScalarConverter::desicion_type(void)
{
	if (this->str.length() == 1 && !isdigit(this->str[0]))
		return (CHAR);
	else if (this->str == "nan" || this->str == "nanf")
		return (UNKNOWN);
	else if (this->str == "inf" || this->str == "+inf" || this->str == "-inf"
			|| this->str == "inff" || this->str == "+inff" || this->str == "-inff")
		return (UNKNOWN);
	else if (this->str.find('.') != std::string::npos)
	{
		if (this->str.find('f') != std::string::npos)
			return (FLOAT);
		else
			return (DOUBLE);
	}
	else
		return (INT);
}

char ScalarConverter::to_char(int num)
{
	if (num == CHAR)
		return (static_cast<char>(this->str[0]));
	else if (num == UNKNOWN)
		return (static_cast<char>(0));
	else if (num == FLOAT)
		return (static_cast<char>(this->to_float(num)));
	else if (num == DOUBLE)
		return (static_cast<char>(this->to_double(num)));
	else
		return (static_cast<char>(this->to_int(num)));
}

int ScalarConverter::to_int(int num)
{
	int i;

	if (num == CHAR)
		return (static_cast<int>(this->str[0]));
	else if (num == UNKNOWN)
		return (static_cast<int>(0));
	else if (num == FLOAT)
		return (static_cast<int>(this->to_float(num)));
	else if (num == DOUBLE)
		return (static_cast<int>(this->to_double(num)));
	else
	{
		i = std::stoi(this->str);
		return (i);
	}
}

float ScalarConverter::to_float(int num)
{
	float f;

	if (num == CHAR)
		return (static_cast<float>(this->str[0]));
	else if (num == UNKNOWN)
		return (static_cast<float>(0));
	else if (num == FLOAT)
		return (static_cast<float>(this->to_float(num)));
	else if (num == DOUBLE)
		return (static_cast<float>(this->to_double(num)));
	else
	{
		f = std::stof(this->str);
		return (f);
	}
}

double ScalarConverter::to_double(int num)
{
	double d;

	if (num == CHAR)
		return (static_cast<double>(this->str[0]));
	else if (num == UNKNOWN)
		return (static_cast<double>(0));
	else if (num == FLOAT)
		return (static_cast<double>(this->to_float(num)));
	else if (num == DOUBLE)
		return (static_cast<double>(this->to_double(num)));
	else
	{
		d = std::stod(this->str);
		return (d);
	}
}



void ScalarConverter::print_all(void)
{
	int num = this->desicion_type();
	std::cout << "char: " << this->to_char(num) << std::endl;
	std::cout << "int: " << this->to_int(num) << std::endl;
	std::cout << "float: " << this->to_float(num) << std::endl;
	std::cout << "double: " << this->to_double(num) << std::endl;
}