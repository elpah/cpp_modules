/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 21:28:30 by eobeng            #+#    #+#             */
/*   Updated: 2025/10/04 18:49:23 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    this->_value = other._value;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

Fixed::Fixed(const int value)
{
    _value = value * (1 << _fractionalBits);
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
    _value = roundf(value * (1 << _fractionalBits));
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
    return (static_cast<float>(_value) / (1 << _fractionalBits));
}

int Fixed::toInt(void) const
{
    return (_value / (1 << _fractionalBits));
}

Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
        this->_value = other._value;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed &other)
{
    return (os << other.toFloat());
}
