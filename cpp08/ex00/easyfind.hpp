/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 18:32:36 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/22 13:39:24 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#define RED "\x1b[31m"
#define NORMAL "\033[0m"
#define GREEN "\x1b[32m" 
#define YELLOW "\x1b[33m"

# include <stdexcept>
# include <algorithm>


//use std find()を使う
//return exception or iterato.begin() or NULL
// return iterator が正解　かもしれない

template <typename T>
typename T::const_iterator easyfind(const T& container, int num)
{
	//iterator 
	typename T::const_iterator it = std::find(container.begin(), container.end(), num);
	if (it == container.end())
		throw std::runtime_error("not found");
	return it;
}
#endif