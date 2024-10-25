/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:49:01 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/25 16:07:06 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_fractional = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
    _value = 0;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	_value = other._value;
}
Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	_value = num << _fractional;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(num * (1 << _fractional));
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_value = other._value;
	return (*this);
}

std::ostream& operator<<(std::ostream &other, const Fixed& fixed)
{
	float num;
	
	num = fixed.toFloat();
	return (other << num);
}

bool Fixed::operator>(const Fixed& other) const
{
	if (this->_value > other._value)
		return (true);
	else
		return (false);
	
}

bool Fixed::operator<(const Fixed& other) const
{
	if (this->_value < other._value)
		return (true);
	else
		return (false);
}

bool Fixed::operator>=(const Fixed& other) const
{
	if (this->_value >= other._value)
		return (true);
	else
		return (false);
}

bool Fixed::operator<=(const Fixed& other) const
{
	if (this->_value <= other._value)
		return (true);
	else
		return (false);
}

bool Fixed::operator!=(const Fixed& other) const
{
		if (this->_value != other._value)
		return (true);
	else
		return (false);
}

Fixed Fixed::operator+(const Fixed& other) const
{
	Fixed temp;
	
	temp._value = this->_value + other._value;
	return (temp);
}

Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed temp;
	
	temp._value = this->_value - other._value;
	return (temp);
}

Fixed Fixed::operator*(const Fixed& other) const
{
	Fixed temp;
	temp._value = ((this->_value * other._value) >> _fractional);
	return (temp);
}

Fixed Fixed::operator/(const Fixed& other) const
{
	Fixed temp;
	temp._value = (this->_value << _fractional) / other._value;
	return (temp);	
}

Fixed& Fixed::operator++()
{
	++_value;
	return (*this);
}

Fixed& Fixed::operator--()
{
	--_value;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	
	this->_value++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	
	this->_value--;
	return (tmp);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	float	num;

	num = static_cast<float>(this->_value) / (1 << this->_fractional);
	return (num);
}

int Fixed::toInt(void) const
{
	return (_value >> _fractional);
}

int Fixed::getRawBits(void) const
{
	std::cout << "Member function getRawBits called" << std::endl;
    return (_value);
}
void Fixed::setRawBits(int const raw)
{
	std::cout << "Member function setRawBits called" << std::endl;
    _value = raw;
}
		
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a >= b)
		return (a);
	else
		return (b);	
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a >= b)
		return (a);
	else
		return (b);	
}