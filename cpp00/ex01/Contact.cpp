/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:02:13 by aborda            #+#    #+#             */
/*   Updated: 2026/05/15 08:56:44 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/* CONSTRUCTEUR */
Contact::Contact() : 
	_firstname(""),
	_lastname(""),
	_nickname(""),
	_phone(""),
	_secret("")
{
}

/* CONSTRUCTEUR DE COPIE */
Contact::Contact(const Contact& other) : 
	_firstname(other._firstname),
	_lastname(other._lastname),
	_nickname(other._nickname),
	_phone(other._phone),
	_secret(other._secret)
{
}

/* OPERATEUR D'AFFECTATION */
Contact& Contact::operator=(const Contact& other)
{
	/* si les deux objets sont differents en memoire alors fait une copie */
	/* C'est une protection contre l'auto-affectation. Si on fait a = a on evite de detruire avant de copier */
	/* ici this est un pointeur vers l'objet courant, c'est l'adresse memoire de l'objet */
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

/* DESTRUCTEUR */
Contact::~Contact()
{
}

/* GETTERS */
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

/* SETTERS */
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
