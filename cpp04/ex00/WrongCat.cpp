/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 11:07:13 by aborda            #+#    #+#             */
/*   Updated: 2026/07/17 13:54:42 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "utils/colors.hpp"
#include "utils/msg.hpp"

WrongCat::WrongCat() :
	WrongAnimal("WrongCat")
{
	msg("*WrongCat* DEFAULT CONSTRUCTOR CALLED");
}

WrongCat::WrongCat(const WrongCat& src) :
	WrongAnimal(src)
{
	msg("*WrongCat* COPY CONSTRUCTOR CALLED");
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
	msg("*WrongCat* COPY ASSIGNEMENT CONSTRUCTOR CALLED");

	if (this != &src)
	{
		WrongAnimal::operator=(src);
	}
	return *this;
}

WrongCat::~WrongCat()
{
	msg("*WrongCat* DESTRUCTOR CALLED");
}

void	WrongCat::makeSound(void) const
{
	msg(CYAN, "Miaou");
}
