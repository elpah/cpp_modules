/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 03:26:00 by elpah             #+#    #+#             */
/*   Updated: 2025/10/17 03:29:04 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main()
{
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	dog->makeSound();
	cat->makeSound();

	delete dog;
	delete cat;

	Animal *zoo[6];
	for (int i = 0; i < 3; i++)
		zoo[i] = new Dog();
	for (int i = 3; i < 6; i++)
		zoo[i] = new Cat();

	for (int i = 0; i < 6; i++)
		zoo[i]->makeSound();
	for (int i = 0; i < 6; i++)
		delete zoo[i];

	Dog d1;
	Dog d2 = d1;

	Cat c1;
	Cat c2;
	c2 = c1;

	return 0;
}
