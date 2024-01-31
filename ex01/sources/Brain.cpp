/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:49:47 by pineau            #+#    #+#             */
/*   Updated: 2024/01/31 14:26:37 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain default constructor called" << std::endl;
	// ideas = new std::string[100];
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
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
	return (*this);
}

void Brain::setIdea(int i, std::string idea) {
	if (i >= 0 && i < 100)
		this->ideas[i] = idea;
	else
		std::cout << "Nuh uh" << std::endl;
}

void	Brain::display_idea(int i) {
	if ((i >= 0 && i < 100) && !this->ideas[i].empty())
		std::cout << "Idea " << i << ": " << this->ideas[i] << std::endl;
	else 
		std::cout << "No idea or out of range" << std::endl;	
}
