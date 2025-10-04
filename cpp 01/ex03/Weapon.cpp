/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 17:18:13 by eobeng            #+#    #+#             */
/*   Updated: 2025/10/03 17:19:56 by eobeng           ###   ########.fr       */
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