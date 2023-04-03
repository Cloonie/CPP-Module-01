/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:41:13 by mliew             #+#    #+#             */
/*   Updated: 2023/04/03 15:48:20 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	harl;

	if (argc == 2)
	{
		if (std::strcmp(argv[1], "DEBUG") == 0)
			harl.complain(1);
		else if (std::strcmp(argv[1], "INFO") == 0)
			harl.complain(2);
		else if (std::strcmp(argv[1], "WARNING") == 0)
			harl.complain(3);
		else if (std::strcmp(argv[1], "ERROR") == 0)
			harl.complain(4);
		else
			harl.complain(0);
	}
	else
		std::cout << "Error! ./harlFilter [DEBUG/INFO/WARNING/ERROR]" << std::endl;
}