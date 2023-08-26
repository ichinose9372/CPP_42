/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:21:06 by yichinos          #+#    #+#             */
/*   Updated: 2023/08/26 18:24:26 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

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
		char to_char(void);
		int to_int(void);
		// float to_float(void);
		// double to_double(void);
	private:
		std::string str;
};

#endif