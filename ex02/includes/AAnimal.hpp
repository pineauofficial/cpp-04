/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:34:02 by pineau            #+#    #+#             */
/*   Updated: 2024/02/01 17:39:18 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

# include "Brain.hpp"

class AAnimal {
	public:
		AAnimal(void);
		AAnimal(AAnimal const & src);
		virtual ~AAnimal(void);
		AAnimal & operator=(AAnimal const & rhs);
		
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
		virtual Brain* getBrain(void) const;
		
	protected:
		std::string _type;	
};

#endif