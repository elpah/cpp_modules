/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 03:33:14 by elpah             #+#    #+#             */
/*   Updated: 2025/09/30 04:50:03 by elpah            ###   ########.fr       */
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
