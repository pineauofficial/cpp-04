/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:25:38 by rertzer           #+#    #+#             */
/*   Updated: 2024/02/21 14:15:22 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(Ice const & src);
		virtual ~Ice();

		Ice &	operator=(const Ice &rhs);

		std::string const & getType() const;
		Ice*		clone() const;
		void		use(ICharacter& target);
};

#endif
