/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 08:21:13 by aborda            #+#    #+#             */
/*   Updated: 2026/06/04 09:06:20 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "utils/msg.hpp"

Brain::Brain()
{
	msg("*Brain* DEFAULT CONSTRUCTOR CALLED");
}

Brain::Brain(const Brain& src)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = src._ideas[i];

	msg("*Brain* COPY CONSTRUCTOR CALLED");
}

Brain& Brain::operator=(const Brain& src)
{
	msg("*Brain* COPY ASSIGNEMENT CONSTRUCTOR CALLED");

	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = (src._ideas[i]);
	}
	return *this;
}

Brain::~Brain()
{
	msg("*Brain* DESTRUCTOR CALLED");
}
