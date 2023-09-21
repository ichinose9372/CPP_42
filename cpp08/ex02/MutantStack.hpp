/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:39:11 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/21 12:15:00 by yichinos         ###   ########.fr       */
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
        typedef typename Container::iterator iterator;
        typedef typename Container::iterator const_iterator;

        MutantStack() : std::stack<T, Container>() {} 
        
        MutantStack<T, Container>(const MutantStack<T, Container>& other)
        {
            *this = other;
        }

        MutantStack<T, Container>& operator=(const MutantStack<T, Container>& other)
        {
            if (this != &other)
                this->c = other.c;
            return (*this);
        }

        iterator begin()
        {
            return this->c.begin();
        }

        iterator end()
        {
            return this->c.end();
        }

        const_iterator begin() const
        {
            return this->c.begin();
        }

        const_iterator end() const
        {
            return this->c.end();
        }
};

#endif
