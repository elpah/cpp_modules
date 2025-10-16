/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 03:26:00 by elpah             #+#    #+#             */
/*   Updated: 2025/10/16 04:41:16 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();



//Wrong Animal
// Without 'virtual', derived class methods cannot be called polymorphically
// through a base class pointer, so the base version is always used.
// This is because the method resolution is done at compile time based on the
// type of the pointer, not the actual object it points to.
// by simply adding virtual to make sound member function in base class in WrongANimal Header
// we tell the compiler to determine the method to call at runtime based on
// the actual object type, enabling polymorphic behavior.

const WrongAnimal* wrongMeta = new WrongAnimal();
const WrongAnimal* wrongI = new WrongCat();
std::cout << wrongI->getType() << " " << std::endl;
wrongI->makeSound(); 
wrongMeta->makeSound();
return 0;

delete(j);
delete(i);
delete(meta);
delete(wrongI);
delete(wrongMeta);
}