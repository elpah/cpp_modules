/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 02:03:14 by elpah             #+#    #+#             */
/*   Updated: 2025/09/30 02:17:02 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *testZombie;
	testZombie = newZombie("Elpah_heap");
	randomChump("Elpah_Stack");
	delete testZombie;
}