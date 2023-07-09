/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <$yichinos@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:27:07 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/08 20:44:09 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{

	FragTrap fragtrap("yichinos");
	ClapTrap claptrap("ichinos");
	fragtrap.attack("ichinos");

	return (0);
}
