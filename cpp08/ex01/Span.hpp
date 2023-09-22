/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:13:01 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/22 14:44:21 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>
#include <stdexcept>

#define RED "\x1b[31m"
#define NORMAL "\033[0m"
#define GREEN "\x1b[32m" 
#define YELLOW "\x1b[33m"



// addnumber はどの型のコンテナのiteratorにも対応できるようにtempleteを使うことで対応する。
// 引数なしのconstructいらない
// unsigned int の　shortest longest
// 代入演算子　conteiner = conteriner ok
// 自己代入演算したときの処理について　 if (this != other) の処理。
// add_number push_back begin
// for (;begin != end ++begin)
// {
// 	addNumber(*begin);
// }

class Span
{
	private: 
		unsigned int 	size;
		std::vector<int> data;
	public:
		Span();
		Span(unsigned int size);
		Span(const Span &other);
		Span& operator=(const Span &other);
		~Span();
		void addNumber(int num);
		size_t getSize(void) const;
		template <typename it>
		void addNumber(it begin, it end)
		{
			for (;begin != end; ++begin)
			{
				addNumber(*begin);	
			}
			if (size == 0)
				this->size = data.size();
		}
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
};
#endif