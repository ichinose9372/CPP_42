/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:58:31 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/23 13:41:34 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <fstream>
#include <iostream>
#include <regex>
#include <string>

class File
{
	public:
		File(const char *argv);
		~File();
		std::ifstream &getIfs(void);
		void	setIfs(const char *argv);
		void	setOfs(void);
		void	get_line(std::ifstream &ifs, char *argv2, char *argv3);
		void	writefile(void);
	private:
		std::ifstream	_ifs;
		std::ofstream	_ofs;
		std::string		_line;
};

#endif
