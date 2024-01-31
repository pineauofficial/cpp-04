/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:52:54 by pineau            #+#    #+#             */
/*   Updated: 2024/01/31 12:13:32 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Animal default constructor called" << std::endl;
	this->_type = "Animal";
}

Animal::Animal(Animal const & src) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & rhs) {
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void Animal::makeSound(void) const {
	std::cout << "Animal makesound called" << std::endl;
}

std::string Animal::getType(void) const {
	return (this->_type);
}

Brain* Animal::getBrain(void) const {
	std::cout << "Animal getBrain called" << std::endl;
	return (NULL);
}
