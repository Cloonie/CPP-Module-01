/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:46:11 by mliew             #+#    #+#             */
/*   Updated: 2023/03/08 17:46:11 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	public:
		Zombie( std::string );
		~Zombie( void );
		void announce( void );

	private:
		std::string _name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );