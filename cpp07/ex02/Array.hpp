/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:34:47 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/18 16:18:21 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstddef>
#include <stdexcept>
#include <stdexcept>


#define RED "\x1b[31m"
#define NORMAL "\033[0m"
#define GREEN "\x1b[32m" 
#define YELLOW "\x1b[33m"


template <typename T>
class Array
{
	public:
		Array();
		~Array();
		Array(unsigned int num);
		Array(const Array &other);
		Array& operator=(const Array &other);
		T& operator[](unsigned int index);
		unsigned int getsize(void) const;
	private:
		T *array;
		unsigned int array_size;
};

#include "Array.tpp"

#endif