/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:42:27 by mliew             #+#    #+#             */
/*   Updated: 2023/04/03 13:19:57 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		struct LogStruct
		{
			const char* level;
			void (Harl::*function)();
		};

	public:
		Harl();
		~Harl();
		void complain(std::string level);
		static const LogStruct logFunc[];
};

#endif