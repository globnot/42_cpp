/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:46:05 by aborda            #+#    #+#             */
/*   Updated: 2026/05/04 11:58:18 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(int ac, char **av)
{
	(void) ac;
	(void) av;

	ClapTrap claptrap;
	ClapTrap claptrapparam("Lucas");

	claptrap.attack("Antoine");
	claptrap.takeDamage(4);
	claptrap.beRepaired(2);

	claptrapparam.attack("Antoine");
	claptrapparam.takeDamage(4);
	claptrapparam.beRepaired(2);
}
