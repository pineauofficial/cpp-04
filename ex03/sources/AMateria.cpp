/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:17:34 by pineau            #+#    #+#             */
/*   Updated: 2024/02/09 15:23:25 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

AMateria::AMateria(void) {
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type) {
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & src) {
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria::~AMateria(void) {
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria & AMateria::operator=(AMateria const & rhs) {
	std::cout << "AMateria assignation operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

std::string const & getType() const {
	return (this->_type);
}

AMateria* clone() const {
	return (new AMateria(*this));
}

void use (ICharacter& target) {
	std::cout << "AMateria use called" << std::endl;
}
