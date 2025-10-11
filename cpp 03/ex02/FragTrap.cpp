/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 03:45:21 by elpah             #+#    #+#             */
/*   Updated: 2025/10/11 04:06:13 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "[FragTrap] default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "[FragTrap] constructor called with param name: " << _name << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap ::~FragTrap()
{
	std::cout << "[FragTrap]  destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "[FragTrap] copy constructor called" << std::endl;
}


FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if(this != &other)
	{
		std::cout << "[FragTrap] assignment operator called." << std::endl;
		ClapTrap::operator=(other);
	}
	std::cout << "[Fragtrap] Assignment operator called" << std::endl;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout<<"[FragTrap] high five!";
}
