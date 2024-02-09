/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:26:02 by pineau            #+#    #+#             */
/*   Updated: 2024/02/09 15:43:30 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>

class ICharacter {
	public:
		ICharacter(void);
		ICharacter(ICharacter const & src);
		ICharacter & operator=(ICharacter const & rhs);
		
	    virtual ~ICharacter(void) {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
		
		std::string getName() const;
		ICharacter(std::string name);
	private:
		std::string _name;
		
};

#endif