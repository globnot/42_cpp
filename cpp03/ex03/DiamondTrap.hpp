/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 09:44:31 by aborda            #+#    #+#             */
/*   Updated: 2026/05/27 20:00:38 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/*
** Sans "virtual" dans mes classes enfants, DiamondTrap contiendrait deux sous-objets ClapTrap :
** Un via ScavTrap et un via FragTrap.
** Donc 2 _name, 2 _hitPoints etc... => AMBIGUITE et GASPILLAGE DE MEMOIRE
*/

/*
** Avec "vitrual" un seul sous-objet ClapTrap partagé.
** => C'est la classe la plus dérivée (donc DiamonTrap) qui appelle directement le constructeur de ClapTrap.
** Les appels à ClapTrap(...) placés dans les constructeurs de ScavTrap et FragTrap sont ignorés.
*/

class DiamondTrap : public ScavTrap, public FragTrap
{
	private :
		std::string	_name;

	public :
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& other);
		DiamondTrap& operator=(const DiamondTrap& other);
		~DiamondTrap();

		void whoAmI();

		/*
		** Quand on cherche attack dans DiamondTrap, on prend celui de ScavTrap.
		** Pas necessaire ici car attack n'existe pas dans FragTrap.
		*/
		using ScavTrap::attack;
};

#endif
