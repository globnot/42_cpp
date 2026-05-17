/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:56:21 by aborda            #+#    #+#             */
/*   Updated: 2026/05/08 08:37:27 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main(int ac, char **av)
{
	(void) av;
	(void) ac;

	PhoneBook	phonebook;
	std::string	input;

	while (true)
	{
		/* PROMPT */
		std::cout << "Que veux-tu faire ? (ADD, SEARCH, EXIT)" << std::endl;

		/*
		** GETLINE = Recupere l'input de l'entree standard
		** 	C'est un appel bloquant, l'OS se met en pause jusqu'a <ENTER>
		*/
		if (!std::getline(std::cin, input))
			return 1;

		if (input == "ADD")
			phonebook.addContact();
		else if (input == "EXIT")
			return 0;
		else if (input == "SEARCH")
			phonebook.searchContact();
	}

	return 0;
}
