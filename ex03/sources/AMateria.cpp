/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:37:19 by rertzer           #+#    #+#             */
/*   Updated: 2024/02/21 14:15:38 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called\n";
}

AMateria::AMateria(std::string const & tp): type(tp)
{
	std::cout << "AMateria constructor called\n";
}

AMateria::AMateria(AMateria const & src)
{
	(void)src;
	std::cout << "AMateria copy constructor called\n";
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called\n";
}

AMateria &	AMateria::operator=(AMateria const & rhs)
{
	(void)rhs;
	std::cout << "AMateria assignment operator called\n";
	return *this;
}

std::string const &	AMateria::getType() const
{
	return type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "Won't do anything to " << target.getName() << std::endl;
}
