/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Herl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:59:13 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/23 14:08:05 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HERL_HPP
#define HERL_HPP

#include <iostream>
#include <string>

class Herl
{
	public:
		void	callFunc(std::string num);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif
