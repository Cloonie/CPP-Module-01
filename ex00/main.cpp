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

int main()
{
	Zombie Foo("Foo");
	Foo.announce();

	Zombie *newzombie = newZombie("new zombie");
	newzombie->announce();
	// The delete operator manually deallocates newzombie variable.
	// It was dynamic memory allocated with new operator.
	// this is to prevent memory leaks.
	delete newzombie;

	randomChump("random chump");

	return 0;
}
