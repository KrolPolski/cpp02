/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:48:51 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/25 15:48:28 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) 
{
	Fixed a = 5;
	Fixed b = 4;
	Fixed c = 20;

	std::cout << "5 + 4 is " << (a + b).toFloat() <<std::endl;
	std::cout << "5 - 4 is " << (a - b).toFloat() <<std::endl;
	std::cout << "5 times 4 is " << (a * b).toFloat() << std::endl;
	std::cout << "20 divided by 4 is "<< (c / b).toFloat() << std::endl;
}
