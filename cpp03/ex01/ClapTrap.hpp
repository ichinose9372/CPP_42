/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:27:03 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/04 16:55:59 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &old_obj);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &old_obj);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		//getter and setter
		std::string	getName(void);
		void		setName(std::string name);
		int			getHitPoints(void);
		void		setHitPoints(int hit_points);
		int			getEnergyPoints(void);
		void		setEnergyPoints(int energy_points);
		int			getAttackDamage(void);
		void		setAttackDamage(int attack_damage);
	private:
		std::string name;
		int		hit_points;//体力
		int		energy_points;//チャクラ
		int		attack_damage;//攻撃力
};

#endif