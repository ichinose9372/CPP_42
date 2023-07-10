/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:18:37 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/10 11:50:53 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

File::File(std::string filename) : _filename(filename)
{
	std::cout << "File constructor called" << std::endl;
	_out_filename = filename + ".replace";
}

File::~File()
{
	std::cout << "File destructor called" << std::endl;
}

void	File::replace(std::string s1, std::string s2)
{
	std::ifstream ifs(_filename);
	std::ofstream ofs(_out_filename);
	std::string line;
	std::string replace;
	size_t pos;

	if (!ifs)
	{
		std::cout << "Error: cannot open file" << std::endl;
		return ;
	}
	if (!ofs)
	{
		std::cout << "Error: cannot open file" << std::endl;
		return ;
	}
	if (s1 == s2)
	{
		std::cout << "Error: same string" << std::endl;
		return ;
	}
	while (std::getline(ifs, line))
	{
		pos = line.find(s1);
		while (s1 != s2 && pos != std::string::npos)
		{
			replace = line.substr(0, pos);
			replace = replace + s2;
			replace = replace + line.substr(pos + s1.length());
			line = replace;
			pos = line.find(s1, pos + s2.size());
		}
		if (ifs.peek() != EOF)
			ofs << line << std::endl;
		else
			ofs << line;
	}
}
