/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auplisas <auplisas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 04:36:19 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/12 20:59:55 by auplisas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// void ScalarConverter::convert(const std::string &input)
// {
// 	try
// 	{
// 		float value = std::stof(input);
// 		std::cout << "Converted float: " << value << std::endl;
// 	}
// 	catch (const std::exception &e)
// 	{
// 		std::cerr << "Conversion failed: " << e.what() << std::endl;
// 	}
// }

void _convertToChar(double value)
{
    std::cout << "char: ";
		if (std::isnan(value) || value < 0 || value > 127)
			std::cout << "impossible" << std::endl;
		else if (!std::isprint(static_cast<char>(value)))
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
}

void ScalarConverter::convert(const std::string &input)
{
	try
	{
		double value = std::stod(input); // use double for maximum precision

		// CHAR conversion
		

		// INT conversion
		std::cout << "int: ";
		if (std::isnan(value) || value < static_cast<double>(std::numeric_limits<int>::min()) || value > static_cast<double>(std::numeric_limits<int>::max()))
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<int>(value) << std::endl;

		// FLOAT conversion
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;

		// DOUBLE conversion
		std::cout << "double: " << std::fixed << std::setprecision(1) << value << std::endl;
	}
	catch (const std::exception &e)
	{
        std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: impossible\n";
		std::cout << "double: impossible\n";
	}
}