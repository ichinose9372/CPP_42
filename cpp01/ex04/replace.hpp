/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <$yichinos@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:58:31 by yichinos          #+#    #+#             */
/*   Updated: 2023/06/12 13:52:11 by yichinos         ###   ########.fr       */
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
		File(std::string filename);
		~File();
		void	replace(std::string s1, std::string s2);
	private:
		std::string _filename;
		std::string _out_filename;
};
#endif
