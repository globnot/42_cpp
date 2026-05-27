/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 09:26:27 by aborda            #+#    #+#             */
/*   Updated: 2026/05/21 09:00:04 by aborda           ###   ########.fr       */
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
		Zombie();
		Zombie(std::string name);
		Zombie(const Zombie& other);
		Zombie& operator=(const Zombie& other);
		~Zombie();

		void	setName(std::string name);

		void	announce(void);
};

	Zombie	*zombieHorde(int N, std::string name);

#endif
