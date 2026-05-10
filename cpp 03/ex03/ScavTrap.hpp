// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ScavTrap.hpp                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/10/10 04:51:14 by elpah             #+#    #+#             */
// /*   Updated: 2025/10/11 04:07:23 by elpah            ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #ifndef SCAVTRAP_HPP
// #define SCAVTRAP_HPP

// #include <iostream>
// #include "ClapTrap.hpp"

// class ScavTrap : public ClapTrap
// {
// public:
// 	ScavTrap();
// 	ScavTrap(std::string name);
// 	~ScavTrap();
// 	ScavTrap(const ScavTrap &other);
// 	ScavTrap &operator=(const ScavTrap &other);
// 	void guardGate();
// };

// #endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:09:02 by dyao              #+#    #+#             */
/*   Updated: 2025/02/15 17:01:44 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
protected:
	bool _guard_mode;

public:
	ScavTrap(std::string name_to_set);
	ScavTrap(const ScavTrap &other);
	bool getGuardMode(void) const;
	ScavTrap &operator=(const ScavTrap &other);
	void guardGate(void);
	void attack(const std::string &target);
	~ScavTrap();
};

#endif