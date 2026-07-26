/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msg.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 11:01:48 by aborda            #+#    #+#             */
/*   Updated: 2026/06/04 08:36:13 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.hpp"
#include <iostream>
#include <string>

void	msg(std::string msg)
{
	std::cout
		<< msg
		<< std::endl;
}

void	msg(std::string color, std::string msg)
{
	std::cout
		<< color
		<< msg
		<< RESET
		<< std::endl;
}

void	msg_no(std::string color, std::string msg)
{
	std::cout
		<< color
		<< msg
		<< RESET;
}

void	msg_nl()
{
	std::cout
		<< std::endl;
}
