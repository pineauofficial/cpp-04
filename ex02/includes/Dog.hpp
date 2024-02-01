/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:49:22 by pineau            #+#    #+#             */
/*   Updated: 2024/02/01 17:46:52 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Brain.hpp"
# include "AAnimal.hpp"

class Dog : public AAnimal{
	public:
		Dog(void);
		Dog(Dog const & src);
		virtual ~Dog(void);
		Dog & operator=(Dog const & rhs);
		Dog(std::string type);
		
		void makeSound(void) const;
		Brain* getBrain(void) const;
	private:
		Brain* _brain;
	
};

#endif