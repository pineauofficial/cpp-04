/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:33:35 by pineau            #+#    #+#             */
/*   Updated: 2024/01/31 14:16:10 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Animal {
	public:
		Animal(void);
		Animal(Animal const & src);
		virtual ~Animal(void);
		Animal & operator=(Animal const & rhs);
		
		virtual void makeSound(void) const;
		std::string getType(void) const;
		virtual Brain* getBrain(void) const;
	protected:
		std::string _type;	
};

#endif