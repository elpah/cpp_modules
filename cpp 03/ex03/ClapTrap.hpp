// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ClapTrap.hpp                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/10/10 03:08:41 by elpah             #+#    #+#             */
// /*   Updated: 2025/10/11 04:39:26 by elpah            ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #ifndef CLAPTRAP_HPP
// #define CLAPTRAP_HPP

// #include <iostream>

// class ClapTrap
// {
// protected:
// 	std::string _name;
// 	int _hitPoints;
// 	int _energyPoints;
// 	int _attackDamage;

// public:
// 	ClapTrap();
// 	ClapTrap(std::string name);
// 	ClapTrap(const ClapTrap &other);
// 	ClapTrap &operator=(const ClapTrap &other);
// 	~ClapTrap();
// 	void attack(const std::string &target);
// 	void takeDamage(unsigned int amount);
// 	void beRepaired(unsigned int amount);
	
// };

// #endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 11:44:17 by dyao              #+#    #+#             */
/*   Updated: 2025/02/15 17:01:14 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string _name;
	int _hit_point;
	int _energy_points;
	int _attack_dmg;

public:
	ClapTrap(std::string name_to_change);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	std::string getName(void) const;
	int getHitPoint(void) const;
	int getEnergyPoints(void) const;
	int getAttackDmg(void) const;
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	virtual ~ClapTrap();
};

#endif