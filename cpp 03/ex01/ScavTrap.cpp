/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 04:52:05 by elpah             #+#    #+#             */
/*   Updated: 2025/10/11 03:30:27 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "[ScavTrap] default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "[ScavTrap] constructor called with name param: " << name << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{

	if (this != &other)
	{
		std::cout << "[ScavTrap] assignment operator called." << std::endl;
		this->_name = other._name;
		this->_attackDamage = other._attackDamage;
		this->_energyPoints = other._energyPoints;
		this->_hitPoints = other._hitPoints;
	}
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << "[ScavTrap]" << this->_name << " Gate keeper mode is on" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] desctructor called" << std::endl;
}