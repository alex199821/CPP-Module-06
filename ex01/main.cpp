/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 04:38:28 by macbook           #+#    #+#             */
/*   Updated: 2025/04/13 05:43:38 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

void	leaks(void)
{
	system("leaks serializer");
}

int main()
{
    // atexit(leaks);
    Data *data = new Data;
    data->name = "Bureucrat Is Back";
    data->grade = 1;
    uintptr_t serialized = Serializer::serialize(data);
    std::cout << "Serialized pointer: " << serialized << std::endl;
    Data *deserialized = Serializer::deserialize(serialized);
    std::cout << "Name: " << deserialized->name << std::endl;
    std::cout << "Grade: " << deserialized->grade << std::endl;
    delete data;
    return (0);
}