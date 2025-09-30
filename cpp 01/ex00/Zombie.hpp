/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 02:03:39 by elpah             #+#    #+#             */
/*   Updated: 2025/09/30 02:12:48 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
	std::string _name;

public:
	Zombie();
	~Zombie();
	void announce(void);
	void setName(std::string name);
	std::string getName(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif