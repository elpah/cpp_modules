/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 21:28:30 by eobeng            #+#    #+#             */
/*   Updated: 2025/10/04 19:02:06 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->_value = 0;
}

Fixed::Fixed(const Fixed &other)
{
    this->_value = other._value;
}

Fixed::~Fixed()
{
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
}

Fixed::Fixed(const float value)
{
    _value = roundf(value * (1 << _fractionalBits));
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
    return (*this);
}

bool Fixed::operator>(const Fixed &other) const
{
    return (_value > other._value);
}
bool Fixed::operator<(const Fixed &other) const
{
    return (_value < other._value);
}

bool Fixed::operator<=(const Fixed &other) const
{
    return (_value <= other._value);
}

bool Fixed::operator>=(const Fixed &other) const
{
    return (_value >= other._value);
}
bool Fixed::operator==(const Fixed &other) const
{
    return (_value == other._value);
}

bool Fixed::operator!=(const Fixed &other) const
{
    return (_value != other._value);
}

Fixed Fixed::operator+(const Fixed &other)
{
    Fixed temp(0);
    temp._value = this->_value + other._value;
    return (temp);
}

Fixed Fixed::operator-(const Fixed &other)
{
    Fixed temp(0);
    temp._value = this->_value - other._value;
    return (temp);
}

Fixed Fixed::operator*(const Fixed &other)
{
    Fixed temp(0);
    temp._value = (this->_value * other._value) / (1 << _fractionalBits);
    return (temp);
}

Fixed Fixed::operator/(const Fixed &other)
{
    Fixed temp(0);
    temp._value = (this->_value * (1 << _fractionalBits)) / (other._value);
    return (temp);
}

Fixed &Fixed::operator++()
{
    _value++;
    return *this;
}

Fixed &Fixed::operator--()
{
    _value--;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    this->_value++;
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    this->_value--;
    return temp;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return a;
    return b;
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return a;
    return b;
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    return b;
}
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

std::ostream &operator<<(std::ostream &os, const Fixed &other)
{
    return (os << other.toFloat());
}
