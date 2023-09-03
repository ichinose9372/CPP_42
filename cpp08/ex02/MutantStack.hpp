/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:39:11 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/03 16:37:01 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <list>

template <typename T>
class MutantStack
{
    private:
        std::list <T> data;
    public:
        MutantStack();
        MutantStack(unsigned int num);
        MutantStack(const MutantStack &other);
        ~MutantStack();
        MutantStack &operator=(const MutantStack &other);

        void push(unsigned int num);
        unsigned int top(void);
        void pop(void);
        unsigned int size(void);
};

#include "MutantStack.tpp"


#endif
