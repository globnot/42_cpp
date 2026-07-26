/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:46:05 by aborda            #+#    #+#             */
/*   Updated: 2026/07/24 17:00:29 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils/colors.hpp"
#include "utils/msg.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	Animal *cats[5];
	Animal *dogs[5];

	msg(GREEN, "5 Animal *cats* Create");
	for (int i = 0; i < 5; i++)
		cats[i] = new Cat();

	msg_nl();

	msg(GREEN, "5 Animal *dogs* Create");
	for (int i = 0; i < 5; i++)
		dogs[i] = new Dog();

	msg_nl();

	msg(GREEN, "Dog *dog* Create on stack");
	Dog dog;
	{
		msg(GREEN, "Dog *tmp* copy Create from dog on stack");
		Dog tmp = dog;
		msg(GREEN, "FIN DU BLOC");
	}
	msg(GREEN, "dog.makeSound doit encore fonctionner (deep copy)");
	dog.makeSound();

	msg_nl();

	msg(RED, "=== HEAP DESTRUCTORS ===");
	for (int i = 0; i < 5; i++)
		delete cats[i];
	for (int i = 0; i < 5; i++)
		delete dogs[i];
	msg_nl();

	msg(RED, "=== STACK DESTRUCTORS ===");

	return 0;
}
