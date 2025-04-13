/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 04:38:22 by macbook           #+#    #+#             */
/*   Updated: 2025/04/13 05:36:38 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <string>
#include <cstdlib>

struct Data
{
	std::string name;
	int grade;
};

class Serializer
{
  private:
  public:
	// Constructors
	Serializer() = delete;
	Serializer(const Serializer &copy) = delete;
	~Serializer() = delete;
	Serializer &operator=(const Serializer &copy) = delete;
	static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};
