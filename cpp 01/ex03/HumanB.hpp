/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 03:33:16 by elpah             #+#    #+#             */
/*   Updated: 2025/09/30 04:31:20 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
#define HUMAN_B

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *_weapon;
	std::string _name;

public:
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon &n_weapon);
	void attack();
};

#endif
