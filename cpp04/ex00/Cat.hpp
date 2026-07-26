/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 10:42:56 by aborda            #+#    #+#             */
/*   Updated: 2026/06/03 15:12:38 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public :
		Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat();

	virtual void	makeSound(void) const;
};

#endif
