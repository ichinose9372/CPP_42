/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:08:58 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/23 13:44:59 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

// int main(int argc, char **argv)
// {
// 	std::ifstream ifs(argv[1]);
// 	if (!ifs)
// 		std::cout << "failed to open" << std::endl;
// 	std::string line;
// 	std::string tmp;
// 	while (std::getline(ifs, tmp))
// 		line += tmp + '\n';
// 	std::string replacedLine = std::regex_replace(line, std::regex(argv[2]), argv[3]);
// 	std::ofstream ofs("new_file");
// 	ofs << replacedLine;
// 	return 0;
// }

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error" << std::endl;
		return 1;
	}

	File	file(argv[1]);
	file.get_line(file.getIfs(), argv[2], argv[3]);
	file.setOfs();
	file.writefile();
	return 0;
}
