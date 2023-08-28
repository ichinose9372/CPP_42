/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:21:06 by yichinos          #+#    #+#             */
/*   Updated: 2023/08/28 15:10:34 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>

typedef enum	e_type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	UNKNOWN
}	t_type;

class ScalarConverter
{
	public:
		// void to_int(int num);
		// void to_float(int num);
		// void to_double(int num);
		static void convert(char *argv);
	private:
		ScalarConverter();
		~ScalarConverter();
		std::string literal;
		static int desicion_type(void);
		static void print_all(int type);
		static void to_char(int num);
};

#endif