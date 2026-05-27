/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 14:15:05 by aborda            #+#    #+#             */
/*   Updated: 2026/05/23 09:05:02 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private :
		int					_rawBits;
		static const int	_fractBits;

	public :
		/* CANONICAL FORM */
		Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();

		/* GETTERS */
		int getRawBits(void) const;

		/* SETTERS */
		void setRawBits(int const raw);
};

#endif
