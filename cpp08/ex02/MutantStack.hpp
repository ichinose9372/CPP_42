/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:39:11 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/17 15:29:46 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP


#include <stack>
#include <iostream>
#include <deque>

#define RED "\x1b[31m"
#define NORMAL "\033[0m"
#define GREEN "\x1b[32m" 
#define YELLOW "\x1b[33m"

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
    // Constructors
    MutantStack() : std::stack<T, Container>() {}
	MutantStack(const MutantStack& other) : std::stack<T, Container>(other) {}
	MutantStack& operator=(const MutantStack& other) 
	{
    	if (this != &other)
		{
        	std::stack<T, Container>::operator=(other);
    	}
    	return *this;
	}
    ~MutantStack() {}

	// iterator
	typedef typename Container::iterator iterator; //typedefで名前をつけます。これは呼び出しのときの名前
	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}
};

#endif
