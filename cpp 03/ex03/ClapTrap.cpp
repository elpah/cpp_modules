// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ClapTrap.cpp                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/10/10 03:21:56 by elpah             #+#    #+#             */
// /*   Updated: 2025/10/11 04:44:12 by elpah            ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "ClapTrap.hpp"

// ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
// {
// 	std::cout << "ClapTrap Default" << " constructor called!" << std::endl;
// }

// ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
// {
// 	std::cout << "ClapTrap " << _name << " constructed!" << std::endl;
// }

// ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
// {
// 	std::cout << "ClapTrap Copy Constructor called with " << _name << std::endl;
// }

// ClapTrap::~ClapTrap()
// {
// 	std::cout << " ClapTrap Destructor called" << std::endl;
// }

// ClapTrap &ClapTrap::operator=(const ClapTrap &other)
// {
// 	if (this != &other)
// 	{
// 		this->_name = other._name;
// 		this->_attackDamage = other._attackDamage;
// 		this->_hitPoints = other._hitPoints;
// 		this->_energyPoints = other._energyPoints;
// 	}
// 	std::cout << "Copy assignment ClapTrap operator called" << std::endl;

// 	return *this;
// }

// void ClapTrap::attack(const std::string &target)
// {
// 	if (_hitPoints > 0 && _energyPoints > 0)
// 	{
// 		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
// 				  << _attackDamage << " points of damage ! " << std::endl;
// 		_energyPoints -= 1;
// 	}
// 	else
// 	{
// 		std::cout << "Cannot attack due to low hit points or energy points" << std::endl;
// 	}
// }

// void ClapTrap::takeDamage(unsigned int amount)
// {
// 	if (_hitPoints <= 0)
// 	{
// 		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
// 		return;
// 	}
// 	if (amount >= static_cast<unsigned int>(_hitPoints))
// 		_hitPoints = 0;
// 	else
// 		_hitPoints -= amount;

// 	std::cout << "ClapTrap " << _name
// 			  << " takes " << amount
// 			  << " points of damage! "
// 			  << "Remaining HP: " << _hitPoints
// 			  << std::endl;
// }

// void ClapTrap::beRepaired(unsigned int amount)
// {
// 	if (_hitPoints == 0)
// 	{
// 		std::cout << "ClapTrap " << _name << " cannot repair because it is dead!" << std::endl;
// 		return;
// 	}
// 	else if (_energyPoints > 0)
// 	{
// 		_hitPoints += amount;
// 		_energyPoints -= 1;
// 		std::cout << "ClapTrap " << _name << " repaired itself" << std::endl;
// 	}

// 	else
// 	{
// 		std::cout << "ClapTrap " << _name
// 				  << " has no energy left to repair itself!" << std::endl;
// 	}
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 11:44:28 by dyao              #+#    #+#             */
/*   Updated: 2025/02/15 12:57:06 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name_to_change)
	: _name(name_to_change), _hit_point(10), _energy_points(10), _attack_dmg(0)
{
	std::cout << "Default constructor called." << std::endl;
}

std::string ClapTrap::getName() const
{
	return (_name);
}

int ClapTrap::getHitPoint() const
{
	return (_hit_point);
}

int ClapTrap::getEnergyPoints() const
{
	return (_energy_points);
}

int ClapTrap::getAttackDmg() const
{
	return (_attack_dmg);
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called." << std::endl;
	this->_name = other.getName();
	this->_hit_point = other.getHitPoint();
	this->_energy_points = other.getEnergyPoints();
	this->_attack_dmg = other.getAttackDmg();
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Assignment operator called." << std::endl;
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hit_point = other.getHitPoint();
		this->_energy_points = other.getEnergyPoints();
		this->_attack_dmg = other.getAttackDmg();
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called." << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (_energy_points > 0)
	{
		--_energy_points;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
				  << _attack_dmg << " points of damage!" << std::endl;
		return;
	}
	else
	{
		std::cout << "Not enough energy point, can not attack!" << std::endl;
		return;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hit_point -= amount;
	if (_hit_point > 0)
		std::cout << "ClapTrap " << _name << " received " << amount
				  << " points of damage!" << std::endl;
	else
	{
		_hit_point = 0; // when it goes to negetive, I set it to zero.
		std::cout << "ClapTrap is DEAD!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points > 0)
	{
		--_energy_points;
		_hit_point += amount;
		std::cout << "ClapTrap " << _name << " repaired itself "
				  << amount << " points of health!" << std::endl;
		return;
	}
	else
	{
		std::cout << "Not enough energy point, can not repair!" << std::endl;
		return;
	}
}