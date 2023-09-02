/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 18:32:36 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/02 14:43:01 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <stdexcept>

template <typename T>
int easyfind(const T& container, int num)
{
	int index = 0;
	for(typename T::const_iterator it = container.begin(); it != container.end(); it++)
	{
		if (*it == num)
			return (index);
		index++;
	}
	return (-1);
}
#endif