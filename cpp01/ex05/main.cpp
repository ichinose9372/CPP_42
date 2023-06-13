/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <$yichinos@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:41:54 by yichinos          #+#    #+#             */
/*   Updated: 2023/06/12 14:43:34 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Herl.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Usage: ./herl [debug|info|warning|error]" << std::endl;
		return (0);
	}
	Herl herl;
	herl.complain(argv[1]);
	return (0);
}
