/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:40:19 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/18 16:39:45 by yichinos         ###   ########.fr       */
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
	delete[] array;
}

template <typename T>
Array<T>::Array(unsigned int num)
{
	try
	{	
		array = new T[num];
	}
	catch(const std::bad_alloc &e)
	{
		std::cerr<< e.what();
	}
	for(unsigned int i = 0; i < num; i++)
	{
		array[i] = 0;
	}
	array_size = num;
}

template <typename T>
Array<T>::Array(const Array &other)
{
	unsigned int size = other.getsize();	
	try
	{	
		array = new T[size];
	}
	catch(const std::bad_alloc &e)
	{
		std::cerr<< e.what();
	}
	for(unsigned int i = 0; i < size; i++)
	{
		array[i] = other.array[i];
	}
	this->array_size = size;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		unsigned int size = other.getsize();
		if (array)
			delete[] array;
	}
	try
	{	
		array = new T[size];
	}
	catch(const std::bad_alloc &e)
	{
		std::cerr<< e.what();
	}
	for(unsigned int i = 0; i < size; i++)
	{
			array[i] = other.array[i];
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (array_size <= index)
	{
		throw std::out_of_range("Index out of range");
	}
	return array[index];
}

template <typename T>
unsigned int Array<T>::getsize(void) const
{
	return array_size;
}


#endif