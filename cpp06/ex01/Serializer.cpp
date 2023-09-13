/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:09:18 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/13 13:33:35 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
 
uintptr_t Serializer::serialize(Data *ptr)
{
	if (ptr)
	{
		return reinterpret_cast<uintptr_t>(ptr);
	}
	return (0);
}

Data *Serializer::deserialize(uintptr_t raw)
{
	if (raw)
	{
		return reinterpret_cast<Data *>(raw);
	}
	return (NULL);
}