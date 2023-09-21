/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:38:39 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/21 11:51:28 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : maxsize(0), data(0), currentIndex(0)
{}

Span::Span(unsigned int size) : maxsize(size), data(maxsize), currentIndex(0)
{}

Span::Span(const Span &other)
{
	this->currentIndex = other.currentIndex;
	this->maxsize = other.data.size();
	data[maxsize];
	for(size_t i = 0; i < other.data.size(); ++i)
	{	
		this->data[i] = other.data[i];
	}
}

Span& Span::operator=(const Span &other)
{
	this->currentIndex = other.currentIndex;
	this->maxsize = other.data.size();
	data.clear();
	data.resize(this->maxsize);
	for(size_t i = 0; i < other.data.size(); ++i)
	{	
		this->data[i] = other.data[i];
	}
	return (*this);
}

Span::~Span()
{}

void Span::addNumber(int num)
{
	if (currentIndex >= maxsize)
	{
		throw std::runtime_error("Array is full!");
    }
	data[currentIndex] = num;
	currentIndex++;
}

int Span::shortestSpan(void)
{
	std::sort(data.begin(), data.end());

	if (data.size() < 2 || currentIndex < maxsize)
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

int Span::longestSpan(void)
{
	if (data.size() < 2 || currentIndex < maxsize) 
	{
		throw std::runtime_error("Not enough numbers to calculate span. (longest)");
	}
	std::sort(data.begin(), data.end());
	int min = data.front();
	int max = data.back();

	return (max - min);
	
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	srand(time(NULL));
	while (begin != end)
	{
		if (currentIndex <= maxsize)
		{
			data[currentIndex] = rand();
			currentIndex++;
			begin++;
		}
	}
}

std::vector<int>::iterator Span::begin()
{
	return data.begin();
}

std::vector<int>::iterator Span::end()
{
	return data.end();
}