/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:40:19 by yichinos          #+#    #+#             */
/*   Updated: 2023/08/30 16:53:04 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void)
{
	array = new T();
	array_size = 0;
}

template <typename T>
Array<T>::~Array()
{
	delete array;
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
	*this = other;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &other)
{
	delete array;
	size_t size = other.size();
	
	array = new T[size];
	for(size_t i = 0; i < size; i++)
	{
		array[i] = other.array[i];
	}
	return *array;
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
size_t Array<T>::size()
{
	T *tmp = array;
	while (tmp)
	{
		array_size++;
		tmp++;
	}
	return array_size;
}