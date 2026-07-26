/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 11:07:13 by aborda            #+#    #+#             */
/*   Updated: 2026/06/04 11:22:16 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include "utils/msg.hpp"

Cat::Cat() :
	Animal("Cat")
{
	brain = new Brain;
	msg("*Cat* DEFAULT CONSTRUCTOR CALLED");
}

Cat::Cat(const Cat& src) :
	Animal(src)
{
	brain = new Brain(*src.brain);
	msg("*Cat* COPY CONSTRUCTOR CALLED");
}

Cat& Cat::operator=(const Cat& src)
{
	msg("*Cat* COPY ASSIGNEMENT CONSTRUCTOR CALLED");

	if (this != &src)
	{
		Animal::operator=(src);
		delete brain;
		brain = new Brain(*src.brain);
	}
	return *this;
}

Cat::~Cat()
{
	delete brain;
	msg("*Cat* DESTRUCTOR CALLED");
}

void	Cat::makeSound(void) const
{
	msg("Miaou");
}
