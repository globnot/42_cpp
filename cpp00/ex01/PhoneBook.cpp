/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:55:40 by aborda            #+#    #+#             */
/*   Updated: 2026/05/21 08:51:53 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "PhoneBook.hpp"

/* CONSTRUCTEUR */
PhoneBook::PhoneBook() :
	_index(0),
	_count(0)
{
}

/* CONSTRUCTEUR DE COPIE */
PhoneBook::PhoneBook(const PhoneBook& other) :
	_index(other._index),
	_count(other._count)
{
	for(int i = 0; i < 8; i++)
		_contact[i] = other._contact[i];
}

/* OPERATEUR D'AFFECTATION */
PhoneBook& PhoneBook::operator=(const PhoneBook& other)
{
	if (this != &other)
	{
		_index = other._index;
		_count = other._count;
		for(int i = 0; i < 8; i++)
			_contact[i] = other._contact[i];
	}
	return *this;
}

/* DESTRUCTEUR */
PhoneBook::~PhoneBook()
{
}

void	PhoneBook::addContact()
{
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phone;
	std::string secret;

	std::cout << "Firstname: ";
	if (!std::getline(std::cin, firstname))
		return ;
	while (firstname.empty() || hasNonAscii(firstname))
	{
		std::cout << "Firstname: ";
		if (!std::getline(std::cin, firstname))
			return ;
	}
	_contact[_index % 8].setFirstname(firstname);

	std::cout << "Lastname: ";
	if (!std::getline(std::cin, lastname))
		return ;
	while (lastname.empty() || hasNonAscii(lastname))
	{
		std::cout << "Lastname: ";
		if (!std::getline(std::cin, lastname))
			return ;
	}
	_contact[_index % 8].setLastname(lastname);

	std::cout << "Nickname: ";
	if (!std::getline(std::cin, nickname))
		return ;
	while (nickname.empty() || hasNonAscii(nickname))
	{
		std::cout << "Nickname: ";
		if (!std::getline(std::cin, nickname))
			return ;
	}
	_contact[_index % 8].setNickname(nickname);

	std::cout << "Phone: ";
	if(!std::getline(std::cin, phone))
		return ;
	while (phone.empty() || hasNonAscii(phone))
	{
		std::cout << "Phone: ";
		if(!std::getline(std::cin, phone))
			return ;
	}
	_contact[_index % 8].setPhone(phone);

	std::cout << "Secret: ";
	if(!std::getline(std::cin, secret))
		return ;
	while (secret.empty() || hasNonAscii(secret))
	{
		std::cout << "Secret: ";
		if(!std::getline(std::cin, secret))
			return ;
	}
	_contact[_index % 8].setSecret(secret);

	std::cout << "Contact ajoute avec succes !" << std::endl;

	_index++;
	if (_count < 8)
		_count++;
}

void	PhoneBook::searchContact() const
{
	std::string	field;
	std::string	input;
	int			index;

	if (_count == 0)
	{
		std::cout << "Pas encore de contact dans la liste" << std::endl;
		return ;
	}

	for (int i = 0; i < _count; i++)
	{
		std::cout << std::right << std::setw(10) << i << "|";

		field = _contact[i].getFirstname();
		if (field.size() > 10)
			std::cout << std::right << std::setw(10) << field.substr(0, 9) + "." << "|";
		else
			std::cout << std::right << std::setw(10) << field << "|";

		field = _contact[i].getLastname();
		if (field.size() > 10)
			std::cout << std::right << std::setw(10) << field.substr(0, 9) + "." << "|";
		else
			std::cout << std::right << std::setw(10) << field << "|";

		field = _contact[i].getNickname();
		if (field.size() > 10)
			std::cout << std::right << std::setw(10) << field.substr(0, 9) + "." << "|" << std::endl;
		else
			std::cout << std::right << std::setw(10) << field << "|" << std::endl;
	}

	std::cout << "Pick un contact dans la liste :" << std::endl;
	if (!std::getline(std::cin, input))
		return ;

	if (input.empty())
	{
		std::cout << "Index eronne" << std::endl;
		return ;
	}

	for(std::string::size_type i = 0; i < input.size(); i++)
	{
		if (!std::isdigit(input[i]))
		{
			std::cout << "Index eronne" << std::endl;
			return ;
		}
	}

	index = std::atoi(input.c_str());

	if (index < 0 || index > (_count - 1))
		std::cout << "Index eronne" << std::endl;
	else
	{
		std::cout << _contact[index].getFirstname() << std::endl;
		std::cout << _contact[index].getLastname() << std::endl;
		std::cout << _contact[index].getNickname() << std::endl;
		std::cout << _contact[index].getPhone() << std::endl;
		std::cout << _contact[index].getSecret() << std::endl;
	}
}

bool	PhoneBook::hasNonAscii(const std::string& s) const
{
	for (std::string::size_type j = 0; j < s.size(); j++)
		if (static_cast<unsigned char>(s[j]) > 127)
			return true;
	return false;
}
