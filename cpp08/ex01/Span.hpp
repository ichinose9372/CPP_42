/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:13:01 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/18 14:49:24 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>
#include <stdexcept>

class Span
{
	private: 
		unsigned int maxsize; 
		std::vector<int> data;
		unsigned int currentIndex;
	public:
		Span();
		Span(unsigned int size);
		Span(const Span &other);
		Span& operator=(const Span &other);
		~Span();
		void addNumber(int num);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan(void);
		int longestSpan(void);
		
};

#endif