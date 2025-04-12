/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auplisas <auplisas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 04:25:46 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/12 20:27:57 by auplisas         ###   ########.fr       */
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
	void _convertToChar(double value);
	void _convertToInt(double value);
	void _convertToFloat(double value);
	void _convertToDouble(double value);
  public:
	// Constructors
	ScalarConverter() = delete;
	ScalarConverter(const ScalarConverter &copy) = delete;
	~ScalarConverter() = delete;
	ScalarConverter &operator=(const ScalarConverter &copy) = delete;
	static void convert(const std::string &input);
};
