/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 08:54:31 by aborda            #+#    #+#             */
/*   Updated: 2026/05/21 09:02:34 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
}

Harl::Harl(const Harl& other)
{
	(void) other;
}

Harl& Harl::operator=(const Harl& other)
{
	if (this != &other)
	{
	}
	return *this;
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
		<< std::endl;
}

void Harl::info(void)
{
	std::cout
		<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
		<< std::endl;
}

void Harl::warning(void)
{
	std::cout
		<< "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."
		<< std::endl;
}

void Harl::error(void)
{
	std::cout
		<< "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}

void Harl::complain(std::string level)
{
	struct s_level
	{
		std::string	name;
		void		(Harl::*func)(void);
	}	t_level;

	s_level	levels[4];

	levels[0].name = "DEBUG";
	levels[0].func = &Harl::debug;
	levels[1].name = "INFO";
	levels[1].func = &Harl::info;
	levels[2].name = "WARNING";
	levels[2].func = &Harl::warning;
	levels[3].name = "ERROR";
	levels[3].func = &Harl::error;

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i].name)
			(this->*levels[i].func)();
	}
}
