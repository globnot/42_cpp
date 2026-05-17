/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:16:06 by aborda            #+#    #+#             */
/*   Updated: 2026/05/15 08:47:25 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	/* PRIVATE = CALLABLE UNIQUEMENT DEPUIS L'INTERIEUR DE LA CLASSE */
	private:
		/* ATTRIBUTS DE CLASSE */
		Contact	_contact[8];
		int		_index;
		int		_count;

		 /*
		 ** METHODE = fonction membre
		 **  Private car le reste du programme n'a pas a savoir comment PhoneBook valide ses entrees.
		 **  = PRINCIPE D'ENCAPSULATION : EXPOSER UNIQUEMENT CE QUI EST NECESSAIRE
		 ** utile pour la validation de donnees. On choisit comment modifier une donnees (setter) = validation
		 */
		bool	hasNonAscii(const std::string& s) const;

	/* PUBLIC = CALLABLE DEPUIS L'EXTERIEUR DE LA CLASSE (LE MAIN PAR EX) */
	public:
		/* CONSTRUCTEUR */
		PhoneBook();
		/* CONSTRUCTEUR DE COPIE */
		PhoneBook(const PhoneBook& other);
		/* OPERATEUR D'AFFECTATION */
		PhoneBook& operator=(const PhoneBook& other);
		/* DESTRUCTEUR */
		~PhoneBook();

		void	addContact();
		void	searchContact() const;
};

#endif
