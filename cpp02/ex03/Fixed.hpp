/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 14:15:05 by aborda            #+#    #+#             */
/*   Updated: 2026/05/25 14:34:43 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <ostream>

class Fixed
{
	private :
		int					_rawBits;
		static const int	_fractBits;

	public :
		/* OCF */
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();

		float toFloat(void) const;
		int toInt(void) const;

		/*
		** Static ici permet d'appeler la méthode sans objet
		** Evite d'écrire a.max(a, b) : pourquoi a et pas b ? Plus propre.
		*/
		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);

		/*
		** PRE-INCREMENT & POST INCREMENT
		** Par convention pour différencier les 2 signatures on ajoute (int) au prototype du post-incrément.
		** C'est une astuce syntaxique (pas de vraie valeur)
		** On les déclare ici car ils ne sont natifs que pour les types natifs (int, float etc..) par pour Fixed.
		*/
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		
		/* GETTERS */
		int getRawBits(void) const;

		/* SETTERS */
		void setRawBits(int const raw);
};

/* INSERTION OPERATOR */
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

/* COMPARISON OPERATOR */
bool operator>(const Fixed& a, const Fixed& b);
bool operator<(const Fixed& a, const Fixed& b);
bool operator>=(const Fixed& a, const Fixed& b);
bool operator<=(const Fixed& a, const Fixed& b);
bool operator==(const Fixed& a, const Fixed& b);
bool operator!=(const Fixed& a, const Fixed& b);

/* ARITHMETIC OPERATOR */
Fixed operator+(const Fixed& a, const Fixed& b);
Fixed operator-(const Fixed& a, const Fixed& b);
Fixed operator*(const Fixed& a, const Fixed& b);
Fixed operator/(const Fixed& a, const Fixed& b);

#endif
