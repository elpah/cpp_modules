/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 03:25:46 by elpah             #+#    #+#             */
/*   Updated: 2025/10/17 03:07:43 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain( new Brain())
{
    std::cout << "Cat default constructor called" << std::endl;
    
}

Cat::Cat(const Cat &other) : Animal(other), _brain(new Brain(*other._brain))
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout <<"cat copy assignment operator called" << std::endl;
    if(this != &other)
    {
        Animal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);
    }
    return *this;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const{
    std::cout <<type <<" meows" << std::endl;
}
