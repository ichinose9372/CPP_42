/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:57:21 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/03 17:07:37 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : data()
{}

template <typename T>
MutantStack<T>::MutantStack(unsigned int num) : data(num)
{}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &other) : data(other.data)
{}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack &other)
{
    if (this != &other) {
        data = other.data;
    }
    return *this;
}

template <typename T>
MutantStack<T>::~MutantStack()
{}

template <typename T>
void MutantStack<T>::push(unsigned int num)
{
    data.push_front(num);
}

template <typename T>
unsigned int MutantStack<T>::top(void)
{
	return (data.front());
}

template <typename T >
void MutantStack<T>::pop(void)
{
	return (data.pop_front());
}

template <typename T>
unsigned int  MutantStack<T>::size(void)
{
	return (data.size());
}
#endif 