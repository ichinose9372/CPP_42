/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:08:58 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/21 15:25:01 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

// int main(void)
// {
// 	std::ifstream ifs("test.txt");
// 	if (!ifs)
// 		std::cout << "failed to open" << std::endl;
// 	std::string line;
// 	std::string tmp;
// 	while (std::getline(ifs, tmp))
// 		line += tmp + '\n';
// 	std::string replacedLine = std::regex_replace(line, std::regex("#"), "$");
// 	std::ofstream ofs("new_file");
// 	ofs << replacedLine;
// 	return 0;
// }

int main(int argc,	char **args)
{
	Stream stm;

	open_file(args[1]);
	
	return 0;
}
