/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:18:00 by pineau            #+#    #+#             */
/*   Updated: 2024/02/09 15:23:48 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

cure::cure(void) {
	std::cout << "Cure default constructor called" << std::endl;
}

cure::cure(cure const & src) {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
}

cure::~cure(void) {
	std::cout << "Cure destructor called" << std::endl;
}

cure & cure::operator=(cure const & rhs) {
	std::cout << "Cure assignation operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

cure* cure::clone() const {
	return (new cure(*this));
}

void use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}