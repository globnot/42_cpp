/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:46:05 by aborda            #+#    #+#             */
/*   Updated: 2026/05/27 16:32:49 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
	std::cout 
		<< GREEN "=== TEST 1 : creation ClapTrap ===" RESET
		<< std::endl;
	ClapTrap claptrap("Clap");
	std::cout << std::endl;

	std::cout 
		<< GREEN "=== TEST 2 : creation FragTrap ===" RESET
		<< std::endl;
	FragTrap fragtrap("frag");
	std::cout << std::endl;

	std::cout 
		<< GREEN "=== TEST 3 : attack / takeDamage / beRepaired ===" RESET
		<< std::endl;
	fragtrap.attack("Mouli");
	fragtrap.takeDamage(0);
	fragtrap.beRepaired(0);
	std::cout << std::endl;

	std::cout 
		<< GREEN "=== TEST 4 : highFivesGuys ===" RESET
		<< std::endl;
	fragtrap.highFivesGuys();
	std::cout << std::endl;

	std::cout 
		<< GREEN "=== TEST 5 : OCF complet ===" RESET
		<< std::endl;
	FragTrap fragtrapDefault;
	std::cout 
		<< RED "----------" RESET
		<< std::endl;
	FragTrap fragtrapCopy(fragtrap);
	std::cout 
		<< RED "----------" RESET
		<< std::endl;
	FragTrap fragtrapAssign;
	std::cout 
		<< RED "----------" RESET
		<< std::endl;
	fragtrapAssign = fragtrap;
	std::cout 
		<< RED "----------" RESET
		<< std::endl;
	/* ON APPELLE UNE METHODE DE FRAGTRAP POUR VERIFIER QUE LA COPIE ET L'ASSIGN ONT FONCTIONNE */
	fragtrapCopy.attack("CibleDeCopy");
	fragtrapAssign.attack("CibleDeAssign");
	std::cout << std::endl;

	std::cout 
		<< GREEN "=== TEST 6 : Destructeur ===" RESET
		<< std::endl;
}
