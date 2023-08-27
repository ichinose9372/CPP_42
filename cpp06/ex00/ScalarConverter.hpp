/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:21:06 by yichinos          #+#    #+#             */
/*   Updated: 2023/08/27 17:35:07 by ichinoseyuu      ###   ########.fr       */
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
		ScalarConverter();
		ScalarConverter(std::string str);
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
		int desicion_type(void);
		void print_all(void);
		void to_char(int num);
		void to_int(int num);
		void to_float(int num);
		void to_double(int num);
	private:
		std::string str;
		double num;
};

#endif