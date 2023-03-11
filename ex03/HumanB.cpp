/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 02:24:11 by mliew             #+#    #+#             */
/*   Updated: 2023/03/12 02:24:11 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL), _name(name)
{
	std::cout << _name << " object constructed" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << _name << " object destroyed" << std::endl;
}

void HumanB::attack(void)
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " is unarmed" << std::endl;
}

void HumanB::setWeapon(Weapon& newWeapon)
{
	delete _weapon;
	_weapon = &newWeapon;
}