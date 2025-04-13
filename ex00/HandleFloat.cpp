/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HandleFloat.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 02:55:05 by macbook           #+#    #+#             */
/*   Updated: 2025/04/13 03:01:06 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

float	stringToFloat(const std::string &string)
{
	std::string temp;
	temp = string;
	if (!temp.empty() && temp.back() == 'f')
		temp.pop_back();
	return (std::stof(temp));
}

void	floatToChar(float number)
{
	std::cout << "char: ";
	if (number < 0 || number > 127 || std::isnan(number))
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(static_cast<int>(number)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(number) << "'" << std::endl;
}

void	floatToInt(float number)
{
	std::cout << "int: ";
	if (number > static_cast<float>(std::numeric_limits<int>::max())
		|| number < static_cast<float>(std::numeric_limits<int>::min())
		|| std::isnan(number))
	{
		std::cout << "impossible" << std::endl;
	}
	else
	{
		std::cout << static_cast<int>(number) << std::endl;
	}
}

void	floatToDouble(float number)
{
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(number) << std::endl;
}

void	handleFloat(const std::string &string)
{
	float convertedFloat = stringToFloat(string);
	floatToChar(convertedFloat);
	floatToInt(convertedFloat);
	std::cout << "float: " << std::fixed << std::setprecision(1) << convertedFloat << "f" << std::endl;
	floatToDouble(convertedFloat);
}