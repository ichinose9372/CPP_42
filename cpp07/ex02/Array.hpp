/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:34:47 by yichinos          #+#    #+#             */
/*   Updated: 2023/08/30 16:52:41 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstddef>
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
		size_t size();
	private:
		T *array;
		size_t array_size;
};


#endif