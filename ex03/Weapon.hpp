/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:45:21 by mliew             #+#    #+#             */
/*   Updated: 2023/03/11 19:45:21 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	public:
		Weapon() : _type("default") {}
		Weapon(std::string newType);
		~Weapon(void);
		const std::string getType(void);
		void setType(std::string newtype);

	private:
		std::string	_type;
};

#endif