/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 02:44:09 by elpah             #+#    #+#             */
/*   Updated: 2025/09/30 02:49:41 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *newZombies = new Zombie[N];
	for (int i = 0; i<N; i++)
	{
		newZombies[i].setName(name);
		// newZombies[i].announce();
	}

	return (newZombies);
}
