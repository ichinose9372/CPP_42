/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:07:21 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/17 15:38:24 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <algorithm>
#include <list>


int main(void)
{
    {
        MutantStack<int> mstack;
        
        mstack.push(5);
        mstack.push(17);
    
        std::cout << mstack.top() << std::endl;
    
        mstack.pop();
        std::cout << mstack.size() << std::endl;
    
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
    
    
        std::cout << mstack.top() << std::endl;
    
        std::cout << mstack.size() << std::endl;
        
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        
    
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    {
        std::cout << YELLOW << "---------test same std::list ---------" << NORMAL << std::endl;
        MutantStack<int> mstack;
        
        mstack.push(5);
        mstack.push(17);
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        std::list<int> mylist;
        mylist.push_back(5);
        mylist.push_back(17);
        mylist.push_back(3);
        mylist.push_back(5);
        mylist.push_back(737);
        mylist.push_back(0);
        
        //check it is same
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();

        std::list<int>::iterator lit = mylist.begin();
        std::list<int>::iterator lite = mylist.end();

        while (it != ite && lit != lite)
        {
            if (*it != *lit)
            {
                std::cout << RED << "not same" << NORMAL << std::endl;
                return (0);
            }
            ++it;
            ++lit;
        }
        std::cout << GREEN << "same" << NORMAL << std::endl;
    }
    return (0);
}