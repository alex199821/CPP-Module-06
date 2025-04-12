/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auplisas <auplisas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 04:25:46 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/12 20:57:47 by auplisas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cctype>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>

class ScalarConverter
{
  private:
	static void _convertToChar(double value);
	static void _convertToInt(double value);
	static void _convertToFloat(double value);
	static void _convertToDouble(double value);
  public:
	// Constructors
	ScalarConverter() = delete;
	ScalarConverter(const ScalarConverter &copy) = delete;
	~ScalarConverter() = delete;
	ScalarConverter &operator=(const ScalarConverter &copy) = delete;
	static void convert(const std::string &input);
};
