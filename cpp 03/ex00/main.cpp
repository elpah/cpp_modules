/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 03:09:11 by elpah             #+#    #+#             */
/*   Updated: 2025/10/10 04:48:02 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap MachineA("elpah");
	ClapTrap MachineB("chris");
	MachineA.attack(MachineB.getName());
	MachineB.takeDamage(4);
	MachineB.attack("Tests");
	return 0;
}