/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:38:39 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/02 17:02:20 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : max_size(0), data()
{}

Span::Span(unsigned int size) : max_size(size), data(max_size)
{}

Span::~Span()
{}
