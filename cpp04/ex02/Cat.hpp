/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 10:42:56 by aborda            #+#    #+#             */
/*   Updated: 2026/06/04 09:22:37 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private :
		Brain *brain;
		
	public :
		Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat();

	virtual void	makeSound(void) const;
};

#endif
