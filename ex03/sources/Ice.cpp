/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:17:48 by pineau            #+#    #+#             */
/*   Updated: 2024/02/09 15:23:54 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

ice::ice(void) {
	std::cout << "Ice default constructor called" << std::endl;
}

ice::ice(ice const & src) {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
}

ice::~ice(void) {
	std::cout << "Ice destructor called" << std::endl;
}

ice & ice::operator=(ice const & rhs) {
	std::cout << "Ice assignation operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

ice* ice::clone() const {
	return (new ice(*this));
}

void use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}