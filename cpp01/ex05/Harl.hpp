/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:59:13 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/16 18:40:46 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	public:
		void	complain(std::string level);
		Harl();
		~Harl();
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};
#endif
