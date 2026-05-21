/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 09:26:27 by aborda            #+#    #+#             */
/*   Updated: 2026/05/21 08:59:43 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	private :
		std::string _name;

	public :
		/* CONSTRUCTEUR */
		Zombie(std::string name);
		/* CONSTRUCTEUR DE COPIE */
		Zombie(const Zombie& other);
		/* OPERATEUR D'AFFECTATION */
		Zombie& operator=(const Zombie& other);
		/* DESTRUCTEUR */
		~Zombie();

		void	announce(void);
		
};

	Zombie	*newZombie(std::string name);
	void	randomChump(std::string name);

#endif
