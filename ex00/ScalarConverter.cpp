/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 04:36:19 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/12 14:43:45 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string &input)
{
	// if (!input.empty() && input.back() == 'f')
	// {
	// 	input.pop_back();
	// }

	try
	{
		float value = std::stof(input);
		std::cout << "Converted float: " << value << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Conversion failed: " << e.what() << std::endl;
	}
}