/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 09:51:31 by aborda            #+#    #+#             */
/*   Updated: 2026/05/21 09:00:27 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	(void) av;
	(void) ac;

	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout
		<< &str
		<< std::endl
		<< stringPTR 
		<< std::endl
		<< &stringREF
		<< std::endl;

	std::cout
		<< str
		<< std::endl
		<< *stringPTR
		<< std::endl
		<< stringREF
		<< std::endl;

	return 0;
}
