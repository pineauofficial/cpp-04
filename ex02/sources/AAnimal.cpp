/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:33:53 by pineau            #+#    #+#             */
/*   Updated: 2024/02/01 17:38:27 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) {
	std::cout << "AAnimal default constructor called" << std::endl;
	this->_type = "AAnimal";
}

AAnimal::AAnimal(AAnimal const & src) {
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = src;
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs) {
	std::cout << "AAnimal assignation operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void AAnimal::makeSound(void) const {
	std::cout << "AAnimal makesound called" << std::endl;
}

std::string AAnimal::getType(void) const {
	return (this->_type);
}

Brain* AAnimal::getBrain(void) const {
	std::cout << "AAnimal getBrain called" << std::endl;
	return (NULL);
}
