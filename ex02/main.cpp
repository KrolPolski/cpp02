/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:48:51 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/25 16:27:04 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) 
{
	{
		Fixed a = 5;
		Fixed b = 4;
		Fixed c = 20;
		
		std::cout << "5 + 4 is " << (a + b).toFloat() <<std::endl;
		std::cout << "5 - 4 is " << (a - b).toFloat() <<std::endl;
		std::cout << "5 times 4 is " << (a * b).toFloat() << std::endl;
		std::cout << "20 divided by 4 is "<< (c / b).toFloat() << std::endl;
		std::cout << "Max of 5 and 4 is " << Fixed::max(a, b).toFloat() << std::endl;
		std::cout << "Min of 5 and 4 is " << Fixed::min(a, b).toFloat() << std::endl;
		std::cout << "5 > 4 is " << (a > b) << std::endl;
		std::cout << "5 < 4 is " << (a < b) << std::endl;
		std::cout << "5 >= 5 is " << (a >= a) << std::endl;
	}
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
		return 0;
	}
}
