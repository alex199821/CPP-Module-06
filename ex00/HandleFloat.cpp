/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HandleFloat.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auplisas <auplisas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 02:55:05 by macbook           #+#    #+#             */
/*   Updated: 2025/04/13 17:23:27 by auplisas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

float stringToFloat(const std::string &string)
{
	std::string temp = string;
	if (!temp.empty() && (temp.back() == 'f' || temp.back() == 'F'))
		temp.pop_back();
	return std::stof(temp);
}

void floatToChar(float number)
{
	std::cout << "char: ";
	if (number < 0 || number > 127 || std::isnan(number))
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(static_cast<int>(number)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(number) << "'" << std::endl;
}

void floatToInt(float number)
{
	std::cout << "int: ";
	if (number > static_cast<float>(std::numeric_limits<int>::max())
		|| number < static_cast<float>(std::numeric_limits<int>::min())
		|| std::isnan(number))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(number) << std::endl;
}

void floatToDouble(float number, int precision)
{
	std::cout << "double: " << std::fixed << std::setprecision(precision) << static_cast<double>(number) << std::endl;
}

void handleFloat(const std::string &string)
{
	float value = stringToFloat(string);
	int precision = countDecimalPlaces(string);

	floatToChar(value);
	floatToInt(value);
	std::cout << "float: " << std::fixed << std::setprecision(precision) << value << "f" << std::endl;
	floatToDouble(value, precision);
}