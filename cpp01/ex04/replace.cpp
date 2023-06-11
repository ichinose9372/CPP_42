/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:18:37 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/23 13:44:30 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void	File::setIfs(const char *argv)
{
	_ifs.open(argv);
	if (!_ifs)
	{
		std::cout << "failed to open" << std::endl;
	}
	return ;
}

void	File::get_line(std::ifstream &ifs, char *argv2, char *argv3)
{
	std::string tmp;
	std::string remake_line;

	while(std::getline(ifs, tmp))
		_line += tmp + '\n';
	remake_line = std::regex_replace(_line, std::regex(argv2), argv3);
	_line = remake_line;
}

std::ifstream&	File::getIfs(void)
{
	return _ifs;
}

void	File::setOfs(void)
{
	_ofs.open("new_file");
	if (!_ofs)
	{
		std::cout << "failed to open" << std::endl;
	}
	return ;
}

void	File::writefile(void)
{
	_ofs << _line;
	_ofs.close();
}


File::File(const char *argv)
{
	setIfs(argv);
}

File::~File(void)
{
	_ifs.close();
}
