/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:46:05 by aborda            #+#    #+#             */
/*   Updated: 2026/05/27 12:22:48 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
	std::cout 
		<< GREEN "=== TEST 1 : creation ClapTrap ===" RESET
		<< std::endl;
	ClapTrap claptrap("Clap");
	std::cout << std::endl;

	std::cout 
		<< GREEN "=== TEST 2 : creation Scavtrap ===" RESET
		<< std::endl;
	ScavTrap scavtrap("Scav");
	std::cout << std::endl;

	std::cout 
		<< GREEN "=== TEST 3 : attack / takeDamage / beRepaired ===" RESET
		<< std::endl;
	scavtrap.attack("Mouli");
	scavtrap.takeDamage(0);
	scavtrap.beRepaired(0);
	std::cout << std::endl;

	std::cout 
		<< GREEN "=== TEST 4 : guardGate ===" RESET
		<< std::endl;
	scavtrap.guardGate();
	std::cout << std::endl;

	std::cout 
		<< GREEN "=== TEST 5 : OCF complet ===" RESET
		<< std::endl;
	ScavTrap scavtrapDefault;
	std::cout 
		<< RED "----------" RESET
		<< std::endl;
	ScavTrap scavtrapCopy(scavtrap);
	std::cout 
		<< RED "----------" RESET
		<< std::endl;
	ScavTrap scavtrapAssign;
	std::cout 
		<< RED "----------" RESET
		<< std::endl;
	scavtrapAssign = scavtrap;
	std::cout 
		<< RED "----------" RESET
		<< std::endl;
	/* ON APPELLE UNE METHODE DE SCAVTRAP POUR VERIFIER QUE LA COPIE ET L'ASSIGN ONT FONCTIONNE */
	scavtrapCopy.attack("CibleDeCopy");
	scavtrapAssign.attack("CibleDeAssign");
	std::cout << std::endl;

	std::cout 
		<< GREEN "=== TEST 6 : Destructeur ===" RESET
		<< std::endl;
}
