/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 18:32:36 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/21 17:22:47 by yichinos         ###   ########.fr       */
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
	return 	std::find(container.begin(), container.end(), num);
}
#endif