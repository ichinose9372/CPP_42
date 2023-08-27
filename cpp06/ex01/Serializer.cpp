/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:09:18 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/08/27 21:37:19 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{   
}

Serializer::~Serializer()
{   
}

// Serializer::Serializer(const Serializer &other)
// {   
//     *this = other;
// }

// Serializer& Serializer::operator=(const Serializer &other)
// {
   
// }
 
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