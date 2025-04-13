/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SelectType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 22:24:38 by macbook           #+#    #+#             */
/*   Updated: 2025/04/13 02:27:06 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	isFloat(const std::string &str)
{
	float	f;
	char	c;

	if (str.empty() || str.back() != 'f')
		return (false);
	std::istringstream iss(str);
	std::string withoutF = str.substr(0, str.size() - 1);
	std::istringstream numStream(withoutF);
	if (!(numStream >> f))
		return (false);
	if (numStream >> c)
		return (false);
	return (true);
}

bool	isDouble(const std::string &str)
{
	char	*digitsEnd;

	std::strtod(str.c_str(), &digitsEnd);
	if (*digitsEnd == '\0')
		return (true);
	return (false);
}

bool	isInt(const std::string &str)
{
	char	*digitsEnd;
	long	val;

	val = std::strtol(str.c_str(), &digitsEnd, 10);
	if (*digitsEnd == '\0' && val >= std::numeric_limits<int>::min()
		&& val <= std::numeric_limits<int>::max())
		return (true);
	return (false);
}

bool	isChar(const std::string &str)
{
	if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
		return (true);
	return (false);
}

literal_type	selectType(const std::string &str)
{
	if (isChar(str))
		return (CHAR);
	if (isInt(str))
		return (INT);
	if (isFloat(str))
		return (FLOAT);
	if (isDouble(str))
		return (DOUBLE);
	return (IMPOSSIBLE);
}