/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 11:07:13 by aborda            #+#    #+#             */
/*   Updated: 2026/07/17 13:53:25 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "utils/colors.hpp"
#include "utils/msg.hpp"

Dog::Dog() :
	Animal("Dog")
{
	msg("*Dog* DEFAULT CONSTRUCTOR CALLED");
}

Dog::Dog(const Dog& src) :
	Animal(src)
{
	msg("*Dog* COPY CONSTRUCTOR CALLED");
}

Dog& Dog::operator=(const Dog& src)
{
	msg("*Dog* COPY ASSIGNEMENT CONSTRUCTOR CALLED");

	if (this != &src)
	{
		Animal::operator=(src);
	}
	return *this;
}

Dog::~Dog()
{
	msg("*Dog* DESTRUCTOR CALLED");
}

void	Dog::makeSound(void) const
{
	msg(CYAN, "Wouf");
}
