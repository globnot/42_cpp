/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:46:05 by aborda            #+#    #+#             */
/*   Updated: 2026/06/04 08:44:07 by aborda           ###   ########.fr       */
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
	msg(GREEN, "Animal *animal* Create");
	const Animal *animal = new Animal();
	msg_no(CYAN, "Sound = ");
	animal->makeSound();
	msg(CYAN, "Type = "+animal->getType());
	msg_nl();

	msg(GREEN, "Dog *dog* Create");
	const Dog *dog = new Dog();
	msg_no(CYAN, "Sound = ");
	dog->makeSound();
	msg(CYAN, "Type = "+dog->getType());
	msg_nl();

	msg(GREEN, "Cat *cat* Create");
	const Cat *cat = new Cat();
	msg_no(CYAN, "Sound = ");
	cat->makeSound();
	msg(CYAN, "Type = "+cat->getType());
	msg_nl();

	msg(GREEN, "Polymorphism Dog *j* Create from Animal");
	const Animal *j = new Dog();
	msg_no(CYAN, "Sound = ");
	j->makeSound();
	msg(CYAN, "Type = "+j->getType());
	msg_nl();

	msg(GREEN, "Polymorphism Cat *i* Create from Animal");
	const Animal *i = new Cat();
	msg_no(CYAN, "Sound = ");
	i->makeSound();
	msg(CYAN, "Type = "+i->getType());
	msg_nl();

	msg(GREEN, "Dog *dogcopy* copy Create from *dog*");
	const Dog *dogcopy = new Dog(*dog); 
	msg_no(CYAN, "Sound = ");
	dogcopy->makeSound();
	msg(CYAN, "Type = "+dogcopy->getType());
	msg_nl();

	msg(GREEN, "Assignation Dog *a* = Dog *b*");
	Dog a;
	Dog b;
	a = b;
	msg_no(CYAN, "Sound = ");
	a.makeSound();
	msg(CYAN, "Type = "+a.getType());
	msg_nl();

	msg(GREEN, "WrongAnimal *wronganimal* Create");
	const WrongAnimal *wronganimal = new WrongAnimal();
	msg_no(CYAN, "Sound = ");
	wronganimal->makeSound();
	msg(CYAN, "Type = "+wronganimal->getType());
	msg_nl();

	msg(GREEN, "WrongCat *wrongcat* Create");
	const WrongCat *wrongcat = new WrongCat();
	msg_no(CYAN, "Sound = ");
	wrongcat->makeSound();
	msg(CYAN, "Type = "+wrongcat->getType());
	msg_nl();

	msg(GREEN, "Polymorphism WrongCat *i* Create from WrongAnimal");
	const WrongAnimal *k = new WrongCat();
	msg_no(CYAN, "Sound = ");
	k->makeSound();
	msg(CYAN, "Type = "+k->getType());
	msg_nl();

	msg(RED, "=== HEAP DESTRUCTORS ===");
	delete animal;
	delete cat;
	delete dogcopy;
	delete dog;
	delete j;
	delete i;
	delete wronganimal;
	delete wrongcat;
	delete k;
	msg_nl();

	msg(RED, "=== STACK DESTRUCTORS ===");

	return 0;
}
