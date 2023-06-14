/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <$yichinos@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:06:14 by yichinos          #+#    #+#             */
/*   Updated: 2023/06/14 11:26:09 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Herl.hpp"

int main(int argc, char **argv)
{
	Herl herl;

	if (argc != 2)
	{
		std::cout << "Invalid argument" << std::endl;
		return (1);
	}
	herl.complain(argv[1]);
	return (0);
}
