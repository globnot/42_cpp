/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:56:21 by aborda            #+#    #+#             */
/*   Updated: 2026/04/21 14:57:31 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	for (int i = 1; av[i]; i++)
		for (int j = 0; av[i][j]; j++)
			std::cout << static_cast<char>(std::toupper(av[i][j]));
	std::cout << std::endl;

	return 0;
}
