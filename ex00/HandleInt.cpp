/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HandleInt.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 02:35:22 by macbook           #+#    #+#             */
/*   Updated: 2025/04/13 02:47:55 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	intToChar(int number)
{
	std::cout << "char: ";
	if (number < 0 || number > 127)
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(number))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(number) << "'" << std::endl;
}

void	intToFloat(int number)
{
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(number) << "f" << std::endl;
}

void	intToDouble(int number)
{
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(number) << std::endl;
}

void	handleInt(const std::string &string)
{
	int number = std::stoi(string);
	intToChar(number);
	std::cout << "int: " << number << std::endl;
	intToFloat(number);
	intToDouble(number);
}