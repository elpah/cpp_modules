/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 03:33:22 by elpah             #+#    #+#             */
/*   Updated: 2025/09/30 04:20:07 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string i_type)
{
	this->_type = i_type;
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType()
{
	return (this->_type);
}

void Weapon::setType(std::string s_type)
{
	this->_type = s_type;
}