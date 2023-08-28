/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:20:22 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/08/28 11:59:55 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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

void ScalarConverter::to_char(int type)
{
    std::string dst;
    
	if (type == CHAR)
    {
        if (!isprint(str[0]))
        {
            std::cout << "char: Non displayable" << std::endl;
            return ;
        }
        dst = str[0];
    }
	else if (type == UNKNOWN)
    {
		std::cout << "char: impossible" << std::endl;
        return ;
    }
	else if (type == INT)
    {
        if (this->num < 0 || this->num > 127)
        {
            std::cout << "char: impossible" << std::endl;
            return ;
        }
        dst = static_cast<char>(this->num);
    }
    else if (type == FLOAT || type == DOUBLE)
    {
        if (this->num < 0 || this->num > 127)
        {
            std::cout << "char: impossible" << std::endl;
            return ;
        }
        dst = static_cast<char>(this->num);
    }
    else
        dst = static_cast<char>(this->num);
    if (!isprint(dst[0]))
    {
        std::cout << "char: Non displayble" << std::endl;
        return ;
    }
    else
        std::cout << "char:  '" << dst << "'"<< std::endl;
}

void ScalarConverter::to_int(int type)
{
	int i;

	if (type == CHAR)
		i = static_cast<int>(str[0]);
	else if (type == UNKNOWN)
    {
        std::cout << "int: impossible" << std::endl;
        return ;
    }
	else if (type == FLOAT || type == DOUBLE)
		i = static_cast<int>(this->num);
	else
        i = static_cast<int>(this->num);
    std::cout << "int: " << i << std::endl;
}

void ScalarConverter::to_float(int type)
{
	float f;

	if (type == CHAR)
		f = static_cast<float>(this->str[0]);
	else if (type == UNKNOWN)
    {
        std::cout << "float: nanf" << std::endl;
        return ;
    }	
	else
		f = static_cast<float>(this->num);
    std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
}

void ScalarConverter::to_double(int type)
{
	double d;

	if (type == CHAR)
		d = static_cast<double>(this->str[0]);
	else if (type == UNKNOWN)
	{
        std::cout << "double: nan" << std::endl;
        return ;   
    }
	else
		d = static_cast<double>(this->num);
    std::cout << "doubel: " << std::fixed << std::setprecision(1) << d << std::endl;
}



void ScalarConverter::print_all(void)
{
	int type = this->desicion_type();
    this->num = std::stod(this->str);
    to_char(type);
	to_int(type);
	to_float(type);
	to_double(type);
}