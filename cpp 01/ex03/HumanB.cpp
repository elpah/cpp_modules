/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 17:18:13 by eobeng            #+#    #+#             */
/*   Updated: 2025/10/03 17:19:49 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &n_weapon)
{
	_weapon = &n_weapon;
}

void HumanB::attack()
{
	if (!this->_weapon)
	{
		std::cout << this->_name << " attacks." <<std::endl;
	}
	else
	{
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	}
}
