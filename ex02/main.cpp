/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 04:38:28 by macbook           #+#    #+#             */
/*   Updated: 2025/04/13 06:38:03 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"

void	leaks(void)
{
	system("leaks base");
}

Base	*generate(void)
{
    srand(time(NULL));
	int	randomNumber;

	randomNumber = rand() % 3 + 1;
	if (randomNumber == 1)
		return (new A);
	else if (randomNumber == 2)
		return (new B);
	else
		return (new C);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
	}
	catch(const std::bad_cast&){}
    try
	{
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
	}
	catch(const std::bad_cast&){}
    try
	{
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
	}
	catch(const std::bad_cast&){}
}

int	main(void)
{
	// atexit(leaks);
	Base *randomBase = generate();
    Base &reference = *randomBase;
    identify(randomBase);
    identify(reference);
    delete randomBase;
	return (0);
}