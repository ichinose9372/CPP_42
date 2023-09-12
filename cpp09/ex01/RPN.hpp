/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:36:07 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/11 17:18:15 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <stack>
#include <string>
#include <sstream>


class RPN
{
    public:
        RPN();
        RPN(const RPN &other);
        RPN(std::string literal);
        RPN& operator=(const RPN &other);
        ~RPN();
    private:
        std::stack<int> data;
};

#endif