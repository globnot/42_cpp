/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:46:05 by aborda            #+#    #+#             */
/*   Updated: 2026/07/25 14:02:31 by aborda           ###   ########.fr       */
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
	/* DOIT PROVOQUER UNE ERREUR DE COMPILATION */
	/*
	** msg(GREEN, "Animal *animal* Create");
	** const Animal *animal = new Animal();
	** msg_no(CYAN, "Sound = ");
	** animal->makeSound();
	** msg(CYAN, "Type = "+animal->getType());
	** msg_nl();
	*/

	msg(GREEN, "Dog *dog* Create");
	const Dog *dog = new Dog();
	msg_no(CYAN, "Sound = ");
	dog->makeSound();
	msg(CYAN, "Type = "+dog->getType());

	msg_nl();

	msg(RED, "=== HEAP DESTRUCTORS ===");
	delete dog;

	return 0;
}
