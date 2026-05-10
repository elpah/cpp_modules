// // /* ************************************************************************** */
// // /*                                                                            */
// // /*                                                        :::      ::::::::   */
// // /*   ScavTrap.cpp                                       :+:      :+:    :+:   */
// // /*                                                    +:+ +:+         +:+     */
// // /*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
// // /*                                                +#+#+#+#+#+   +#+           */
// // /*   Created: 2025/10/10 04:52:05 by elpah             #+#    #+#             */
// // /*   Updated: 2025/10/11 04:07:21 by elpah            ###   ########.fr       */
// // /*                                                                            */
// // /* ************************************************************************** */

// // #include "ScavTrap.hpp"

// // ScavTrap::ScavTrap() : ClapTrap()
// // {
// // 	_hitPoints = 100;
// // 	_energyPoints = 50;
// // 	_attackDamage = 20;
// // 	std::cout << "[ScavTrap] default constructor called" << std::endl;
// // }

// // ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
// // {
// // 	std::cout << "[ScavTrap] constructor called with name param: " << name << std::endl;
// // 	_hitPoints = 100;
// // 	_energyPoints = 50;
// // 	_attackDamage = 20;
// // }

// // ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
// // {
// // 	std::cout << "ScavTrap copy constructor called." << std::endl;
// // }

// // ScavTrap &ScavTrap::operator=(const ScavTrap &other)
// // {

// // 	if (this != &other)
// // 	{
// // 		std::cout << "[ScavTrap] assignment operator called." << std::endl;
// // 		ClapTrap::operator=(other);
// // 	}
// // 	return *this;
// // }

// // void ScavTrap::guardGate()
// // {
// // 	std::cout << "[ScavTrap]" << this->_name << " Gate keeper mode is on" << std::endl;
// // }

// // ScavTrap::~ScavTrap()
// // {
// // 	std::cout << "[ScavTrap] desctructor called" << std::endl;
// // }

// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ScavTrap.hpp                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/02/15 13:09:02 by dyao              #+#    #+#             */
// /*   Updated: 2025/02/15 17:01:44 by dyao             ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #ifndef SCAVTRAP_HPP
// #define SCAVTRAP_HPP

// #include "ClapTrap.hpp"

// class ScavTrap : virtual public ClapTrap
// {
// protected:
// 	bool _guard_mode;

// public:
// 	ScavTrap(std::string name_to_set);
// 	ScavTrap(const ScavTrap &other);
// 	bool getGuardMode(void) const;
// 	ScavTrap &operator=(const ScavTrap &other);
// 	void guardGate(void);
// 	void attack(const std::string &target);
// 	~ScavTrap();
// };

// #endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:32:18 by dyao              #+#    #+#             */
/*   Updated: 2025/02/15 14:54:03 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name_to_set) : ClapTrap(name_to_set)
{
	std::cout << "ScavTrap default constructor called." << std::endl;
	_hit_point = 100;
	_energy_points = 50;
	_attack_dmg = 50;
	_guard_mode = false;
}

bool ScavTrap::getGuardMode() const
{
	return (_guard_mode);
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
	this->_name = other.getName();
	this->_hit_point = other.getHitPoint();
	this->_energy_points = other.getEnergyPoints();
	this->_attack_dmg = other.getAttackDmg();
	this->_guard_mode = other.getGuardMode();
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		std::cout << "ScavTrap assignment operator called." << std::endl;
		ClapTrap::operator=(other);
		this->_guard_mode = other.getGuardMode();
	}
	return (*this);
}

void ScavTrap::guardGate()
{
	_guard_mode = !_guard_mode;
	if (_guard_mode)
		std::cout << "Gate keeper mode is on now!" << std::endl;
	else
		std::cout << "Gate keeper mode is off now!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (_energy_points > 0)
	{
		--_energy_points;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
				  << _attack_dmg << " points of damage!" << std::endl;
		return;
	}
	else
	{
		std::cout << "Not enough energy point, can not attack!" << std::endl;
		return;
	}
}