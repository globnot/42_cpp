/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:56:21 by aborda            #+#    #+#             */
/*   Updated: 2026/05/21 08:51:24 by aborda           ###   ########.fr       */
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
		std::cout << "Que veux-tu faire ? (ADD, SEARCH, EXIT)" << std::endl;

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
