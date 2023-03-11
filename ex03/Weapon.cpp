/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:45:54 by mliew             #+#    #+#             */
/*   Updated: 2023/03/11 19:45:54 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newType) : _type(newType)
{
	std::cout << _type << " object constructed" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << _type << " object destroyed" << std::endl;
}

const std::string Weapon::getType(void)
{
	return _type;
}

void	Weapon::setType(std::string newtype)
{
	_type = newtype;
}