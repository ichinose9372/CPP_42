/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:13:01 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/21 18:05:13 by yichinos         ###   ########.fr       */
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
		
		void addNumber(iterator begin, iterator end);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
		std::vector<int>::iterator begin();
		std::vector<int>::iterator end();
};

#endif