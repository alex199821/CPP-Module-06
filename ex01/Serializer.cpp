/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 04:38:26 by macbook           #+#    #+#             */
/*   Updated: 2025/04/13 05:29:52 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t	Serializer::serialize(Data *ptr)
{
	uintptr_t	serializedPointer;

	serializedPointer = reinterpret_cast<uintptr_t>(ptr);
	return (serializedPointer);
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	Data *deserializedPointer;
	deserializedPointer = reinterpret_cast<Data *>(raw);
	return (deserializedPointer);
}