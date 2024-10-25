/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:48:57 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/25 15:43:24 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int 				_value;
		static const int	_fractional;
	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;
		/*Fixed& operator++();
		Fixed& operator--();
		Fixed& operator++(int);
		Fixed& operator--(int);*/
		~Fixed();
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed& min(Fixed& a, Fixed& b);
		Fixed& max(Fixed& a, Fixed& b);
		Fixed& min(const Fixed& a, const Fixed& b);
		Fixed& max(const Fixed& a, const Fixed& b);
};
std::ostream& operator<<(std::ostream &other, const Fixed& fixed);
#endif

