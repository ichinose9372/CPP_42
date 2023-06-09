/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Herl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <$yichinos@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:53:26 by yichinos          #+#    #+#             */
/*   Updated: 2023/06/14 11:06:10 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HERL_HPP
# define HERL_HPP

# include <iostream>
# include <string>

class Herl
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		void complain( std::string level);
};

#endif
