/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 04:52:05 by elpah             #+#    #+#             */
/*   Updated: 2025/10/11 04:07:21 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
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
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{

	if (this != &other)
	{
		std::cout << "[ScavTrap] assignment operator called." << std::endl;
		ClapTrap::operator=(other);
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