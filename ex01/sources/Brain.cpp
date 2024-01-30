/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:49:47 by pineau            #+#    #+#             */
/*   Updated: 2024/01/30 18:50:08 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const & src) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=(Brain const & rhs) {
	std::cout << "Brain assignation operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}
