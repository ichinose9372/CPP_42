/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:58:31 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/21 15:25:13 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <fstream>
#include <iostream>
#include <regex>

class Stream
{
	private:
		std::ifstream	_ifs;
	public:
		void	setIfs(std::ifstream ifs);
};

std::ifstream	open_file(std::string args);
// std::string		get_next_line(std::ifstream ifs);
// std::string		replace_line(std::string line);
// void			write_file(std::string new_line);
#endif
