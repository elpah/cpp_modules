/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 03:09:11 by elpah             #+#    #+#             */
/*   Updated: 2025/10/11 03:32:10 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap elpah("Elpah");
	elpah.attack("Chris!!!");
	elpah.takeDamage(10);
	elpah.beRepaired(2);
	elpah.guardGate();
	return 0;
}