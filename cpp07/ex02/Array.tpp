/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:40:19 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/01 18:19:43 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : array(NULL), array_size(0)
{}

template <typename T>
Array<T>::~Array()
{
	std::cout << "destructor called" << std::endl;
	if (array)
		delete[] array;
}

template <typename T>
Array<T>::Array(T num)
{
	array = new T[num];
	array_size = num;
}

template <typename T>
Array<T>::Array(const Array &other)
{
	size_t size = other.getsize();
	
	array = new T[size];
	for(size_t i = 0; i < size; i++)
	{
		array[i] = other.array[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		delete[] array;
		size_t size = other.getsize();
	
		array = new T[size];
		for(size_t i = 0; i < size; i++)
		{
			array[i] = other.array[i];
		}
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned long index)
{
	if (array_size <= index)
	{
		throw std::out_of_range("Index out of range");
	}
	return array[index];
}

template <typename T>
size_t Array<T>::getsize(void) const
{
	return array_size;
}

template <typename T>
const char* Array<T>::OutOfRangeException::what() const throw()
{
	return "Index out of range";
}

#endif