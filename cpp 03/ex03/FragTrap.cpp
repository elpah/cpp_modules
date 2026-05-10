// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   FragTrap.cpp                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/10/11 03:45:21 by elpah             #+#    #+#             */
// /*   Updated: 2025/10/11 04:06:13 by elpah            ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "FragTrap.hpp"

// FragTrap::FragTrap() : ClapTrap()
// {
// 	std::cout << "[FragTrap] default constructor called" << std::endl;
// 	_hitPoints = 100;
// 	_energyPoints = 100;
// 	_attackDamage = 30;
// }

// FragTrap::FragTrap(std::string name) : ClapTrap(name)
// {
// 	std::cout << "[FragTrap] constructor called with param name: " << _name << std::endl;
// 	_hitPoints = 100;
// 	_energyPoints = 100;
// 	_attackDamage = 30;
// }

// FragTrap ::~FragTrap()
// {
// 	std::cout << "[FragTrap]  destructor called" << std::endl;
// }

// FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
// {
// 	std::cout << "[FragTrap] copy constructor called" << std::endl;
// }


// FragTrap &FragTrap::operator=(const FragTrap &other)
// {
// 	if(this != &other)
// 	{
// 		std::cout << "[FragTrap] assignment operator called." << std::endl;
// 		ClapTrap::operator=(other);
// 	}
// 	std::cout << "[Fragtrap] Assignment operator called" << std::endl;
// 	return *this;
// }

// void FragTrap::highFivesGuys(void)
// {
// 	std::cout<<"[FragTrap] high five!";
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:05:17 by dyao              #+#    #+#             */
/*   Updated: 2025/02/15 16:03:55 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name_to_set) : ClapTrap(name_to_set)
{
	std::cout << "FragTrap default constructor called." << std::endl;
	_hit_point = 100;
	_energy_points = 100;
	_attack_dmg = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
	this->_hit_point = other.getHitPoint();
	this->_energy_points = other.getEnergyPoints();
	this->_attack_dmg = other.getAttackDmg();
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap copy assignment operator called." << std::endl;
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hit_point = other.getHitPoint();
		this->_energy_points = other.getEnergyPoints();
		this->_attack_dmg = other.getAttackDmg();
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void FragTrap::highFivesGuys(FragTrap &other)
{
	std::cout << _name << " and " << other.getName()
			  << " make a high five together." << std::endl;
}