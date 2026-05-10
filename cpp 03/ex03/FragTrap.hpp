// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   FragTrap.hpp                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/10/11 03:35:23 by elpah             #+#    #+#             */
// /*   Updated: 2025/10/11 04:07:32 by elpah            ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #ifndef FRAG_TRAP_HPP
// #define FRAG_TRAP_HPP

// #include "ClapTrap.hpp"

// class FragTrap : public ClapTrap {

// public:
// 	FragTrap();
// 	FragTrap(std::string name);
// 	~FragTrap();
// 	FragTrap(const FragTrap &other);
// 	FragTrap &operator=(const FragTrap &other);
// 	void highFivesGuys(void);
// };

// #endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:04:57 by dyao              #+#    #+#             */
/*   Updated: 2025/02/15 17:01:38 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
public:
	FragTrap(std::string name_to_set);
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &other);
	void highFivesGuys(FragTrap &other);
	~FragTrap();
};

#endif