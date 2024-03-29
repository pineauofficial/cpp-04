/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:25:38 by rertzer           #+#    #+#             */
/*   Updated: 2024/02/21 14:15:09 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria
{
	public:
		AMateria();
		AMateria(std::string const & tp);
		AMateria(AMateria const & src);
		virtual ~AMateria();

		AMateria &	operator=(const AMateria &rhs);

		std::string const & getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

	protected:
		std::string	type;
};

#endif
