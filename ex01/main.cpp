/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:54:51 by mliew             #+#    #+#             */
/*   Updated: 2023/03/08 17:54:51 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie		*horde;
	int			numZombies;
	std::string	zombieName;

	numZombies = 5;
	zombieName = "Bob";

	horde = zombieHorde(numZombies, zombieName);
	for (int i = 0; i < numZombies; i++)
		horde[i].announce();

	delete[] horde;

	return 0;
}
