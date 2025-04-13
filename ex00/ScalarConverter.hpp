/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auplisas <auplisas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 04:25:46 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/13 17:17:55 by auplisas         ###   ########.fr       */
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

enum			literal_type
{
	CHAR = 1,
	INT = 2,
	FLOAT = 3,
	DOUBLE = 4,
	IMPOSSIBLE = 5
};

class ScalarConverter
{
  private:
  public:
	// Constructors
	ScalarConverter() = delete;
	ScalarConverter(const ScalarConverter &copy) = delete;
	~ScalarConverter() = delete;
	ScalarConverter &operator=(const ScalarConverter &copy) = delete;
	static void convert(const std::string &input);
};

int	countDecimalPlaces(const std::string &string);
literal_type	selectType(const std::string &str);
void			handleInt(const std::string &string);
void			handleFloat(const std::string &string);
void			handleDouble(const std::string &string);
void			handleChar(const std::string &string);