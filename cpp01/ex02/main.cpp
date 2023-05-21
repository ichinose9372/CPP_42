/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:52:23 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/05/20 13:10:20 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << std::hex << &str << std::endl;
	std::cout << std::hex << stringPTR << std::endl;
	std::cout << std::hex << &stringREF << std::endl;

	std::cout << str << std::endl;
	std::cout << *stringPTR << std ::endl;
	std::cout << stringREF << std::endl;
}
