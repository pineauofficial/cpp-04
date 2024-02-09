/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:03:11 by pineau            #+#    #+#             */
/*   Updated: 2024/02/09 15:38:07 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(void) {
	std::cout << "ICharacter default constructor called" << std::endl;
}

ICharacter::ICharacter(ICharacter const & src) {
	std::cout << "ICharacter copy constructor called" << std::endl;
	*this = src;
}

ICharacter::~ICharacter(void) {
	std::cout << "ICharacter destructor called" << std::endl;
}

ICharacter & ICharacter::operator=(ICharacter const & rhs) {
	std::cout << "ICharacter assignation operator called" << std::endl;
	if (this != &rhs)
		//
	return (*this);
}

ICharacter::ICharacter(std::string name) : _name(name) {
	std::cout << "ICharacter constructor called" << std::endl;
}

std::string ICharacter::getName() const {
	return (this->_name);
}
