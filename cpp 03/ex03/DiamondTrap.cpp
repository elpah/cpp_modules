// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/10/11 04:31:26 by elpah             #+#    #+#             */
// /*   Updated: 2025/10/11 04:44:07 by elpah            ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "DiamondTrap.hpp"

// DiamondTrap::DiamondTrap() : ClapTrap("noname_clap_name"), ScavTrap(), FragTrap(), _name("noname")
// {
// 	ScavTrap::resetEnergy();
// 	std::cout << "DiamondTrap default constructor called" << std::endl;
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:50:49 by dyao              #+#    #+#             */
/*   Updated: 2025/02/15 17:49:35 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name_to_set)
	: ClapTrap(name_to_set + "_clap_name"), ScavTrap(name_to_set), FragTrap(name_to_set), _name(name_to_set)
{
	std::cout << "DiamondTrap default constructor called." << std::endl;
	_hit_point = FragTrap::_hit_point;
	_energy_points = ScavTrap::_energy_points;
	_attack_dmg = FragTrap::_attack_dmg;
}

DiamondTrap::DiamondTrap(DiamondTrap &other)
	: ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "DiamondTrap copy constructor called." << std::endl;
	this->_name = other._name;
	this->_hit_point = other._hit_point;
	this->_energy_points = other._energy_points;
	this->_attack_dmg = other._attack_dmg;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &other)
{
	std::cout << "DiamonTrap copy assignment operator called." << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit_point = other._hit_point;
		this->_energy_points = other._energy_points;
		this->_attack_dmg = other._attack_dmg;
	}
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "this is the ClapTrap name: " << ClapTrap::getName() << std::endl;
	std::cout << "this is the DiamondTrap name: " << _name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called." << std::endl;
}