/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:13:01 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/03 13:02:13 by ichinoseyuu      ###   ########.fr       */
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
		int shortestSpan(void);
		int longestSpan(void);
};

#endif