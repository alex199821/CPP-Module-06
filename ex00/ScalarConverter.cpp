/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auplisas <auplisas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 04:36:19 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/13 17:17:48 by auplisas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	countDecimalPlaces(const std::string &string)
{
	std::size_t dot = string.find('.');
	if (dot == std::string::npos)
		return 1;
	std::size_t end = string.find_first_of("fF", dot);
	if (end == std::string::npos)
		end = string.length();
	return static_cast<int>(end - dot - 1);
}

bool	checkSpecialCases(const std::string &input)
{
	if (input == "nan" || input == "nanf")
		return (true);
	if (input == "+inf" || input == "+inff")
		return (true);
	if (input == "-inf" || input == "-inff")
		return (true);
	return (false);
}

void	handleSpecialCases(const std::string &input)
{
	if (input == "nan" || input == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (input == "+inf" || input == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (input == "-inf" || input == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
}

void ScalarConverter::convert(const std::string &input)
{
	if (checkSpecialCases(input))
		handleSpecialCases(input);
	else
	{
		literal_type inputType;

		inputType = selectType(input);

		if (inputType == CHAR)
			handleChar(input);
		else if (inputType == INT)
			handleInt(input);
		else if (inputType == FLOAT)
			handleFloat(input);
		else if (inputType == DOUBLE)
			handleDouble(input);
		else
		{
			std::cout << "char: impossible\n";
			std::cout << "int: impossible\n";
			std::cout << "float: impossible\n";
			std::cout << "double: impossible\n";
		}
	}
}