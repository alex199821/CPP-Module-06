/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HandleChar.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 03:33:13 by macbook           #+#    #+#             */
/*   Updated: 2025/04/13 03:43:38 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	charToInt(char c)
{
	std::cout << "int: ";
	if (c < 0 || c > 127)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(c) << std::endl;
}

void	charToFloat(char c)
{
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
}

void	charToDouble(char c)
{
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

void	handleChar(const std::string &string)
{
	char c = string[0];
	std::cout << "char: " << "'" << c << "'" << std::endl;
	charToInt(c);
	charToFloat(c);
	charToDouble(c);
}