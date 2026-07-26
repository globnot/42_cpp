/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 10:42:56 by aborda            #+#    #+#             */
/*   Updated: 2026/06/04 09:22:42 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private :
		Brain *brain;

	public :
		Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		~Dog();

	virtual void	makeSound(void) const;
};

#endif
