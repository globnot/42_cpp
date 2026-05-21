/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 09:13:34 by aborda            #+#    #+#             */
/*   Updated: 2026/05/21 09:01:01 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB
{
	private :
		std::string _name;
		Weapon* _weapon;

	public :
		HumanB(std::string name);
		HumanB(const HumanB& other);
		HumanB& operator=(const HumanB& other);
		~HumanB();

		void setWeapon(Weapon& weapon);

		void attack();
};

#endif
