/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 14:15:05 by aborda            #+#    #+#             */
/*   Updated: 2026/05/25 09:55:55 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include<ostream>

class Fixed
{
	private :
		int					_rawBits;
		static const int	_fractBits;

	public :
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();

		float toFloat(void) const;
		int toInt(void) const;

		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		
		int getRawBits(void) const;

		void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

bool operator>(const Fixed& a, const Fixed& b);
bool operator<(const Fixed& a, const Fixed& b);
bool operator>=(const Fixed& a, const Fixed& b);
bool operator<=(const Fixed& a, const Fixed& b);
bool operator==(const Fixed& a, const Fixed& b);
bool operator!=(const Fixed& a, const Fixed& b);

Fixed operator+(const Fixed& a, const Fixed& b);
Fixed operator-(const Fixed& a, const Fixed& b);
Fixed operator*(const Fixed& a, const Fixed& b);
Fixed operator/(const Fixed& a, const Fixed& b);

#endif
