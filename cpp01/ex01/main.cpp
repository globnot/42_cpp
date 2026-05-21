/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 09:51:31 by aborda            #+#    #+#             */
/*   Updated: 2026/05/21 09:00:37 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int main(int ac, char **av)
{
	(void) av;
	(void) ac;

	int N = 4;
	std::string name = "Antoine";

	Zombie *horde = zombieHorde(N, name);

	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;

	return 0;
}
