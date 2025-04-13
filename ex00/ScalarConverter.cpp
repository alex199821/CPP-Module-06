/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 04:36:19 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/13 03:54:31 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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