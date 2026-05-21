/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 08:41:20 by aborda            #+#    #+#             */
/*   Updated: 2026/05/21 09:00:54 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class HumanA
{
	private :
		std::string _name;
		Weapon& _weapon;

	public :
		HumanA(std::string name, Weapon& weapon);
		HumanA(const HumanA& other);
		HumanA& operator=(const HumanA& other);
		~HumanA();

		void attack();
};

#endif
