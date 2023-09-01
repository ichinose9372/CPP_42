/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:34:47 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/01 18:13:20 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstddef>
#include <stdexcept>
#include <stdexcept>


template <typename T>
class Array
{
	public:
		Array();
		~Array();
		Array(T num);
		Array(const Array &other);
		Array& operator=(const Array &other);
		T& operator[](unsigned long index);
		size_t getsize(void) const;
		class OutOfRangeException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	private:
		T *array;
		size_t array_size;
};

#include "Array.tpp"

#endif