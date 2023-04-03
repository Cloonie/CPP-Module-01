/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:42:19 by mliew             #+#    #+#             */
/*   Updated: 2023/04/03 13:19:35 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	// constructor
}

Harl::~Harl()
{
	// destructor
}

void Harl::debug(void)
{
	std::cout <<	"[ DEBUG ]" << std::endl;
	std::cout <<	"I love having extra bacon for my "
					"7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout <<	"I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout <<	"[ INFO ]" << std::endl;
	std::cout <<	"I cannot believe adding extra bacon costs more money. You didn't put "
					"enough bacon in my burger!" << std::endl;
	std::cout <<	"If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout <<	"[ WARNING ]" << std::endl;
	std::cout <<	"I think I deserve to have some extra bacon for free." << std::endl;
	std::cout <<	"I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout <<	"[ ERROR ]" << std::endl;
	std::cout <<	"This is unacceptable! I want to speak to the manager now." << std::endl;
}

const Harl::LogStruct Harl::logFunc[] =
{
	{"debug", &Harl::debug},
	{"info", &Harl::info},
	{"warning", &Harl::warning},
	{"error", &Harl::error}
};

void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (level == logFunc[i].level)
		{
			(this->*logFunc[i].function)();
			return;
		}
	}
}