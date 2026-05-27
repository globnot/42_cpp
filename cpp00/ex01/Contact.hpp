/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:13:41 by aborda            #+#    #+#             */
/*   Updated: 2026/05/15 08:35:32 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	private:
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_phone;
		std::string	_secret;

	public:
		Contact();
		Contact(const Contact& other);
		Contact& operator=(const Contact& other);
		~Contact();

		std::string	getFirstname() const;
		std::string	getLastname() const;
		std::string	getNickname() const;
		std::string	getPhone() const;
		std::string	getSecret() const;

		void	setFirstname(std::string firstname);
		void	setLastname(std::string lastname);
		void	setNickname(std::string nickname);
		void	setPhone(std::string phone);
		void	setSecret(std::string secret);
};

#endif
