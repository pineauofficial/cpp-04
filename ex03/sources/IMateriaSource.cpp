/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:29:50 by pineau            #+#    #+#             */
/*   Updated: 2024/02/09 15:21:28 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void) {
	std::cout << "IMateriaSource default constructor called" << std::endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const & src) {
	std::cout << "IMateriaSource copy constructor called" << std::endl;
	*this = src;
}

IMateriaSource::~IMateriaSource(void) {
	std::cout << "IMateriaSource destructor called" << std::endl;
}

IMateriaSource & IMateriaSource::operator=(IMateriaSource const & rhs) {
	std::cout << "IMateriaSource assignation operator called" << std::endl;
	if (this != &rhs)
		//
	return (*this);
}

void IMateriaSource::learnMateria(AMateria* m) {
	
}

AMateria* IMateriaSource::createMateria(std::string const & type) {
	
}