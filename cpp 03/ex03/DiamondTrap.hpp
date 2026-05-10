// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/10/11 04:14:15 by elpah             #+#    #+#             */
// /*   Updated: 2025/10/11 04:37:37 by elpah            ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #ifndef DIAMOND_TRAP_HPP
// #define DIAMOND_TRAP_HPP

// #include "ScavTrap.hpp"
// #include "FragTrap.hpp"

// class DiamondTrap : public ScavTrap, public FragTrap
// {
// 	private:
// 	std::string _name;

// 	public:
// 		DiamondTrap();
// 		DiamondTrap(std::string name);
// 		~DiamondTrap();
// 		DiamondTrap(const DiamondTrap &other);
// 		DiamondTrap &operator=(const DiamondTrap &other);
// 		void attack(const std::string &target);
// 		void whoAmI(void);
// };

// #endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:50:27 by dyao              #+#    #+#             */
/*   Updated: 2025/02/15 17:48:22 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string _name;

public:
	DiamondTrap(std::string name_to_set);
	DiamondTrap(DiamondTrap &other);
	DiamondTrap &operator=(DiamondTrap &other);
	void attack(const std::string &target);
	void whoAmI(void);
	~DiamondTrap();
};

#endif