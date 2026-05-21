/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 07:31:05 by aborda            #+#    #+#             */
/*   Updated: 2026/05/21 09:02:43 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	private :
		std::string _type;

	public :
		Weapon();
		Weapon(std::string type);
		Weapon(const Weapon& other);
		Weapon& operator=(const Weapon& other);
		~Weapon();

		const std::string& getType() const;

		void	setType(std::string type);
};

#endif
