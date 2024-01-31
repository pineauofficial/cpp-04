/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:52:57 by pineau            #+#    #+#             */
/*   Updated: 2024/01/31 12:41:40 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const & src) {
	std::cout << " Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog & Dog::operator=(Dog const & rhs) {
	std::cout << "Dog assignation operator called" << std::endl;
		if (this != &rhs)
		this->_type = rhs._type;
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*rhs._brain);
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "Woof Woof" << std::endl;
}

Brain* Dog::getBrain(void) const {
	return (this->_brain);
}
