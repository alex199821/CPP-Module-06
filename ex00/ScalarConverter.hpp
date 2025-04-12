/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ScalarConverter.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auplisas <auplisas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 04:25:46 by auplisas          #+#    #+#             */
/*   Updated: 2025/04/12 04:38:43 by auplisas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>
#include <sstream>
#include <cctype>
#include <cmath>

class  ScalarConverter
{
  private:

  public:
	// Constructors
    ScalarConverter() = delete;
    ScalarConverter(const  ScalarConverter &copy) = delete;
	~ScalarConverter() = delete;
    ScalarConverter &operator=(const  ScalarConverter &copy) = delete;
	static void convert(const std::string &input);
};
