/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:46:05 by aborda            #+#    #+#             */
/*   Updated: 2026/05/27 20:08:51 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

/*
** PRINCIPE DE DOMINANCE :
** Si une classe override une méthode d'une base virtuelle,
** cet override domine sur l'accès à la version originale par n'importe quel autre chemin.
** Donc ScavTrap::attack "écrase" l'accès à ClapTrap::attack
*/
int main(void)
{
	std::cout 
		<< GREEN "=== TEST 1 : creation DiamondTrap ===" RESET
		<< std::endl;
	DiamondTrap diamondtrap("Dia");
	std::cout << std::endl;

	std::cout 
		<< GREEN "=== TEST 2 : attack / takeDamage / beRepaired ===" RESET
		<< std::endl;
	diamondtrap.attack("Mouli");
	diamondtrap.takeDamage(0);
	diamondtrap.beRepaired(0);
	std::cout << std::endl;

	std::cout 
		<< GREEN "=== TEST 3 : whoAmI ===" RESET
		<< std::endl;
	diamondtrap.whoAmI();
	std::cout << std::endl;

	std::cout 
		<< GREEN "=== TEST 4 : OCF complet ===" RESET
		<< std::endl;
	DiamondTrap diamondtrapDefault;
	std::cout 
		<< RED "----------" RESET
		<< std::endl;
	DiamondTrap diamondtrapCopy(diamondtrap);
	std::cout 
		<< RED "----------" RESET
		<< std::endl;
	DiamondTrap diamondtrapAssign;
	std::cout 
		<< RED "----------" RESET
		<< std::endl;
	diamondtrapAssign = diamondtrap;
	std::cout 
		<< RED "----------" RESET
		<< std::endl;
	/* ON APPELLE UNE METHODE DE diamondTRAP POUR VERIFIER QUE LA COPIE ET L'ASSIGN ONT FONCTIONNE */
	diamondtrapCopy.attack("CibleDeCopy");
	diamondtrapAssign.attack("CibleDeAssign");
	std::cout << std::endl;

	std::cout 
		<< GREEN "=== TEST 5 : Destructeur ===" RESET
		<< std::endl;
}
