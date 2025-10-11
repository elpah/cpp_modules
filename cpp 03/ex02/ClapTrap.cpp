/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 03:21:56 by elpah             #+#    #+#             */
/*   Updated: 2025/10/11 03:33:12 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default" << " constructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " constructed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Copy Constructor called with " << _name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << " ClapTrap Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_attackDamage = other._attackDamage;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
	}
	std::cout << "Copy assignment ClapTrap operator called" << std::endl;

	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
				  << _attackDamage << " points of damage ! " << std::endl;
		_energyPoints -= 1;
	}
	else
	{
		std::cout << "Cannot attack due to low hit points or energy points" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		return;
	}
	if (amount >= static_cast<unsigned int>(_hitPoints))
		_hitPoints = 0;
	else
		_hitPoints -= amount;

	std::cout << "ClapTrap " << _name
			  << " takes " << amount
			  << " points of damage! "
			  << "Remaining HP: " << _hitPoints
			  << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " cannot repair because it is dead!" << std::endl;
		return;
	}
	else if (_energyPoints > 0)
	{
		_hitPoints += amount;
		_energyPoints -= 1;
		std::cout << "ClapTrap " << _name << " repaired itself" << std::endl;
	}

	else
	{
		std::cout << "ClapTrap " << _name
				  << " has no energy left to repair itself!" << std::endl;
	}
}

// getters

std::string ClapTrap::getName()
{
	return _name;
}

int ClapTrap::getAttackDamage()
{
	return _attackDamage;
}

int ClapTrap::getEnergyPoints()
{
	return _energyPoints;
}

int ClapTrap::getHitPoints()
{
	return _hitPoints;
}