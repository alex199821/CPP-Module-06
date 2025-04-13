/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auplisas <auplisas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:43:49 by macbook           #+#    #+#             */
/*   Updated: 2025/04/13 17:17:34 by auplisas         ###   ########.fr       */
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