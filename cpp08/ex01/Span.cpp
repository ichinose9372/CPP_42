/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:38:39 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/22 14:47:10 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : size(0)
{}

Span::Span(unsigned int size) : size(size)
{}

Span::Span(const Span &other)
{
	data = other.data;
}

Span& Span::operator=(const Span &other)
{
	if (this != &other)
	{
		size = other.size;
		data = other.data;
	}
	return (*this);
}

Span::~Span()
{}

void Span::addNumber(int num)
{
	if (data.size() < this->size || this->size == 0)
	{
		data.push_back(num);
	}
	else
		throw std::runtime_error("Array is full!");	
}


//shortest にcurrentIndexの条件式はいらない。
unsigned int Span::shortestSpan(void)
{
	std::sort(data.begin(), data.end());

	if (data.size() < 2)
	{	
		throw std::runtime_error("Not enough numbers to calculate span. (shortest)");
	}

	int minDifference = std::numeric_limits<int>::max();
	
	for (size_t i = 1; i < data.size(); ++i) {
		int difference = data[i] - data[i - 1];
		if (difference < minDifference) {
			minDifference = difference;
		}
	}	
	return minDifference;
}

unsigned int Span::longestSpan(void)
{
	if (data.size() < 2) 
	{
		throw std::runtime_error("Not enough numbers to calculate span. (longest)");
	}
	std::sort(data.begin(), data.end());
	int min = data.front();
	int max = data.back();

	return (max - min);
	
}

size_t Span::getSize(void) const
{
	return (size);
}