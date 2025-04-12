/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 04:25:46 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/12 14:33:56 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cctype>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>

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
