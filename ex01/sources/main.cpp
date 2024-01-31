/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:53:09 by pineau            #+#    #+#             */
/*   Updated: 2024/01/31 15:00:05 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void) {
	int nb = 4;
	const Animal* animal[nb];
	for (int i = 0; i < nb/2; i++)
		animal[i] = new Dog();
	for (int i = nb/2; i < nb; i++)
		animal[i] = new Cat();
	std::cout << "-------------------------------------" << std::endl;
	animal[0]->getBrain()->setIdea(0, "I'm a dog");
	animal[0]->getBrain()->display_idea(0);
	animal[0]->getBrain()->setIdea(99, "I'm a good dog");
	animal[0]->getBrain()->display_idea(99);
	animal[0]->getBrain()->setIdea(100, "I'm a bad dog");
	animal[0]->getBrain()->display_idea(100);
	std::cout << std::endl;
	animal[3]->getBrain()->setIdea(3, "I'm a cat");
	animal[3]->getBrain()->display_idea(3);
	animal[3]->getBrain()->setIdea(99, "I'm a good cat");
	animal[3]->getBrain()->display_idea(99);
	animal[3]->getBrain()->setIdea(99, "I'm a very good cat");
	animal[3]->getBrain()->display_idea(99);
	animal[3]->getBrain()->setIdea(100, "I'm a bad cat");
	animal[3]->getBrain()->display_idea(100);
	std::cout << std::endl;
	const Cat* cat1 = new Cat();
	const Cat* cat2 = new Cat(*cat1);
	cat2->getBrain()->setIdea(0, "I'm a cat");
	cat2->getBrain()->display_idea(0);
	cat1->getBrain()->setIdea(0, "I'm a cat");
	cat1->getBrain()->display_idea(0);
	std::cout << "-------------------------------------" << std::endl;
	for (int i = 0; i < nb; i++)
		delete animal[i];
	delete cat1;
	delete cat2;
}
