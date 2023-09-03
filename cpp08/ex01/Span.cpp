/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:38:39 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/03 13:17:24 by ichinoseyuu      ###   ########.fr       */
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
	data.resize(this->maxsize);
	for(size_t i = 0; i < other.data.size(); ++i)
	{	
		this->data[i] = other.data[i];
	}
}

Span& Span::operator=(const Span &other)
{
	this->currentIndex = other.currentIndex;
	this->maxsize = other.data.size();
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
	if (currentIndex >= maxsize) {
        throw std::runtime_error("Array is full!");
    }
	data[currentIndex] = num;
	currentIndex++;
}

int Span::shortestSpan(void)
{
	std::sort(data.begin(), data.end());

	 if (data.size() < 2 || currentIndex < maxsize) {
        throw std::runtime_error("Not enough numbers to calculate span.");
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
	 if (data.size() < 2 || currentIndex < maxsize) {
        throw std::runtime_error("Not enough numbers to calculate span.");
    }
    std::sort(data.begin(), data.end());
	int min = data.front();
	int max = data.back();

	return (max - min);
	
}