/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 09:51:31 by aborda            #+#    #+#             */
/*   Updated: 2026/05/21 09:02:40 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
		return 1;

	std::string outname= std::string(av[1]) + ".replace";
	std::string s1 = av[2];
	if (s1.empty())
		return 1;
	std::string s2 = av[3];
	std::string line;
	size_t pos;

	std::ifstream infile(av[1]);
	if (!infile)
		return 1;
	std::ofstream outfile(outname.c_str());
	if (!outfile)
		return 1;

	while (std::getline(infile, line))
	{
		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.size());
			pos = line.find(s1, pos + s2.size());
		}
		outfile << line << std::endl;
	}

	return 0;
}
