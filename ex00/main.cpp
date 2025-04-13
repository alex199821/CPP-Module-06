/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:43:49 by macbook           #+#    #+#             */
/*   Updated: 2025/04/13 03:56:16 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char *argv[])
{
    if (argc == 2)
	{
		ScalarConverter::convert(argv[1]);
		return (0);
	}
	else
		std::cout << "Incorrect Number of Arguments." << std::endl;
	return (1);
}