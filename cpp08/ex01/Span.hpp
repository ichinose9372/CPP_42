/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:13:01 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/02 16:58:50 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>

class Span
{
	private: 
		unsigned int max_size; 
		std::vector<int> data;
	public:
		Span();
		Span(unsigned int size);
		~Span();	
};

#endif