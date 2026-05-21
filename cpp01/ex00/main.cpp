/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 09:51:31 by aborda            #+#    #+#             */
/*   Updated: 2026/05/21 08:58:35 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int main(int ac, char **av)
{
	(void) av;
	(void) ac;

	std::string name = "Antoine";
	Zombie *z = newZombie(name);

	z->announce();
	delete z;

	randomChump(name);

	return 0;
}
