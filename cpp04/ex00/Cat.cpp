/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 11:07:13 by aborda            #+#    #+#             */
/*   Updated: 2026/07/17 13:52:51 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "utils/colors.hpp"
#include "utils/msg.hpp"

Cat::Cat() :
	Animal("Cat")
{
	msg("*Cat* DEFAULT CONSTRUCTOR CALLED");
}

Cat::Cat(const Cat& src) :
	Animal(src)
{
	msg("*Cat* COPY CONSTRUCTOR CALLED");
}

Cat& Cat::operator=(const Cat& src)
{
	msg("*Cat* COPY ASSIGNEMENT CONSTRUCTOR CALLED");

	if (this != &src)
	{
		Animal::operator=(src);
	}
	return *this;
}

Cat::~Cat()
{
	msg("*Cat* DESTRUCTOR CALLED");
}

void	Cat::makeSound(void) const
{
	msg(CYAN, "Miaou");
}
