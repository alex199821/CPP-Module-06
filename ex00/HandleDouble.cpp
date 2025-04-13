/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HandleDouble.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 03:21:07 by macbook           #+#    #+#             */
/*   Updated: 2025/04/13 03:31:59 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	doubleToChar(double value)
{
	std::cout << "char: ";
	if (std::isnan(value) || value < 0 || value > 127)
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(static_cast<char>(value)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
}

void	doubleToInt(double value)
{
	std::cout << "int: ";
	if (std::isnan(value)
		|| value < static_cast<double>(std::numeric_limits<int>::min())
		|| value > static_cast<double>(std::numeric_limits<int>::max()))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(value) << std::endl;
}

void	doubleToFloat(double value)
{
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
}

void	handleDouble(const std::string &string)
{
	double value = std::stod(string);
	doubleToChar(value);
    doubleToInt(value);
	doubleToFloat(value);
    std::cout << "double: " << std::fixed << std::setprecision(1) << value << std::endl;
}