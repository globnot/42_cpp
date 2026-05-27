/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:02:13 by aborda            #+#    #+#             */
/*   Updated: 2026/05/21 08:51:04 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : 
	_firstname(""),
	_lastname(""),
	_nickname(""),
	_phone(""),
	_secret("")
{
}

Contact::Contact(const Contact& other) : 
	_firstname(other._firstname),
	_lastname(other._lastname),
	_nickname(other._nickname),
	_phone(other._phone),
	_secret(other._secret)
{
}

Contact& Contact::operator=(const Contact& other)
{
	if (this != &other)
	{
		_firstname = other._firstname;
		_lastname = other._lastname;
		_nickname = other._nickname;
		_phone = other._phone;
		_secret = other._secret;
	}
	return *this;
}

Contact::~Contact()
{
}

std::string Contact::getFirstname() const
{
	return _firstname;
}

std::string Contact::getLastname() const
{
	return _lastname;
}

std::string Contact::getNickname() const
{
	return _nickname;
}

std::string Contact::getPhone() const
{
	return _phone;
}

std::string Contact::getSecret() const
{
	return _secret;
}

void Contact::setFirstname(std::string firstname)
{
	_firstname = firstname;
}

void Contact::setLastname(std::string lastname)
{
	_lastname = lastname;
}

void Contact::setNickname(std::string nickname)
{
	_nickname = nickname;
}

void Contact::setPhone(std::string phone)
{
	_phone = phone;
}

void Contact::setSecret(std::string secret)
{
	_secret = secret;
}
